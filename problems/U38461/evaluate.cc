#include "eval.hh"
#include "util.hh"
using namespace pro2;

int evaluate(BinTree<std::string> t)
{
    if (is_number(t.value()))
        return string_to_int(t.value());

    int left = evaluate(t.left());
    int right = evaluate(t.right());

    switch (t.value()[0])
    {
    case '+':
        return left + right;
    case '-':
        return left - right;
    case '*':
        return left * right;
    }
    return 0;
}
