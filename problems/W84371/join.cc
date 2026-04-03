#include <cassert>
#include <string>
#include <vector>
using namespace std;

/**
 * @brief Concatenates a sequence of strings using a separator.
 * @pre [begin, end) is a valid range of iterators.
 * @post Returns a single string containing all elements from the range
 * joined by 'sep' (with no separator after the last element).
 */
string join(vector<string>::iterator begin, vector<string>::iterator end, string sep)
{
    assert(begin < end);

    string result = *begin;
    ++begin;

    while (begin != end)
    {
        result += sep;
        result += *begin;
        ++begin;
    }

    return result;
}
