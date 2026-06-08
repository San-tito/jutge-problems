#ifndef ARBRE_IO_HH
#define ARBRE_IO_HH

#include <cassert>
#include <iostream>
#include <sstream>
#include <vector>

#include "Arbre.hh"

// Read //////////////////////////////////////////////////////////////////////

const std::string _through = "|   ";
const std::string _fork = "|-- ";
const std::string _corner = "'-- ";
const std::string _empty = "    ";

const std::vector<std::string> _tree_pieces{_through, _fork, _corner, _empty};

bool _is_tree_piece(std::string line) {
	if (line.size() < 4) {
		return false;
	}
	const std::string prefix = line.substr(0, 4);
	for (const auto& piece : _tree_pieces) {
		if (prefix == piece) {
			return true;
		}
	}
	return false;
}

template <typename T>
struct Element {
	int level;
	T value;
};

template <typename T>
Element<T> _parse_element(std::istream& in) {
	std::string line;
	getline(in, line);

	Element<T> result;
	result.level = 0;
	while (_is_tree_piece(line.substr(0, 4))) {
		line = line.substr(4);
		result.level++;
	}
	std::istringstream sin(line);
	sin >> result.value;
	return result;
}

template <typename T>
struct Result {
	Arbre<T> tree;
	int level;
	T value;
};

template <typename T>
Result<T> _parse_tree(std::istream& in, int level, T value) {
	// If the next element we see is not a child => we have no children
	auto elem = _parse_element<T>(in);
	if (elem.level <= level) {
		Arbre<string> empty, leaf;
		leaf.plantar(value, empty, empty);
		return {
			.tree = leaf,
			.level = elem.level,
			.value = elem.value,
		};
	}

	auto left_result = _parse_tree<T>(in, elem.level, elem.value);
	Arbre<T> left(left_result.tree);		 // FIXME: This copies the whole thing

	assert(left_result.level == level + 1);	 // If there was a left, there must be a right

	auto right_result = _parse_tree<T>(in, left_result.level, left_result.value);
	Arbre<T> right(right_result.tree);	// FIXME: This copies the whole thing

	// We have at least a left child, the result should be the right child
	Arbre<T> tree;
	tree.plantar(value, left, right);

	return {
		.tree = tree,
		.level = right_result.level,
		.value = right_result.value,
	};
}

template <typename T>
Arbre<T> read_tree(std::istream& in) {
	auto elem = _parse_element<T>(in);
	assert(elem.level == 0);
	auto result = _parse_tree<T>(in, elem.level, elem.value);
	return result.tree;
}

Arbre<std::string> leer_arbol_string() {
	return read_tree<std::string>(std::cin);
}

// Write //////////////////////////////////////////////////////////////////////

struct Branch {
	int curr = 0;
	size_t total = -1;

	Branch(int _curr, size_t _total) : curr(_curr), total(_total) {}
};

template <typename T>
void _write_tree(std::ostream& out, Arbre<T>& A, std::vector<Branch>& pending) {
	for (int i = 0; i < pending.size(); i++) {
		bool is_last = i == pending.size() - 1;
		Branch& pend = pending[i];
		if (pend.curr >= pend.total) {
			out << _empty;
		} else if (pend.curr == pend.total - 1) {
			out << (is_last ? _corner : _through);
		} else {
			out << (is_last ? _fork : _through);
		}
		if (is_last) {
			pend.curr++;
		}
	}

	if (A.es_buit()) {
		out << "#" << std::endl;
		return;
	}

	out << A.arrel() << std::endl;

	Arbre<T> left, right;
	A.fills(left, right);
	if (left.es_buit() and right.es_buit()) {
		return;
	}

	// Write left
	pending.push_back(Branch(0, 2));
	_write_tree(out, left, pending);
	pending.pop_back();

	// Write right
	pending.push_back(Branch(1, 2));
	_write_tree(out, right, pending);
	pending.pop_back();
}

// FIXME(pauek): Writing the tree destroys it!
template <typename T>
void escribir_arbol(Arbre<T>& A) {
	std::vector<Branch> pending;
	_write_tree(std::cout, A, pending);
}

#endif