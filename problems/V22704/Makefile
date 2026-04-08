CXX := g++
CXXFLAGS := -g3 -D_GLIBCXX_DEBUG -Wall -Wextra -Werror -Wno-sign-compare -std=c++11 -fno-extended-identifiers

PROGRAM := program
SRCS    := $(wildcard *.cc *.hh)
INPUTS  := $(wildcard sample*.in sample*.inp)

.PHONY: all clean test format

all: $(PROGRAM)

$(PROGRAM): $(wildcard *.cc)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(PROGRAM) *.out

format:
	@echo "Formatting source files..."
	@clang-format -i $(SRCS)

test: $(PROGRAM)
	@echo "------------------------------------------------------------"
	@echo "Running tests for $(PROGRAM)..."
	@echo "------------------------------------------------------------"
	@pass=0; fail=0; \
	for infile in $(INPUTS); do \
		base=$${infile%.*}; \
		expected="$$base.cor"; \
		actual="$$base.out"; \
		if [ ! -f "$$expected" ]; then \
			echo "⚠️  $$infile: Missing $$expected, skipping."; \
			continue; \
		fi; \
		./$(PROGRAM) < "$$infile" > "$$actual" 2>&1; \
		if diff -bBq "$$actual" "$$expected" > /dev/null; then \
			echo "✅ $$infile: OK"; \
			pass=$$((pass+1)); \
			rm -f "$$actual"; \
		else \
			echo "❌ $$infile: FAILED"; \
			echo "--- Differences ($$actual vs $$expected) ---"; \
			diff -y -bB --color=always "$$actual" "$$expected" || true; \
			echo "--------------------------------------------"; \
			fail=$$((fail+1)); \
		fi; \
	done; \
	echo "------------------------------------------------------------"; \
	echo "Summary: $$pass passed, $$fail failed."; \
	echo "------------------------------------------------------------"; \
	[ $$fail -eq 0 ]
