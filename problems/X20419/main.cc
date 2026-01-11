#include <cassert>
#include <iostream>
#include <vector>

/*
 * @pre input: n > 0 followed by n strings
 * @post returns n strings
 */
std::vector<std::string> read_strings(void)
{
    int n;
    std::cin >> n;
    assert(n > 0);

    std::vector<std::string> seq(n);
    for (int i = 0; i < n; ++i)
        std::cin >> seq[i];

    return seq;
}

/*
 * @pre size > 0
 * @post returns average string length
 */
double average_length(const std::vector<std::string> &seq)
{
    const int size = seq.size();
    assert(size > 0);

    double sum = 0;
    for (int i = 0; i < size; ++i)
        sum += seq[i].size();

    return sum / size;
}

/*
 * @pre s size > 0, letters a-z
 * @post returns most frequent letter
 */
char most_frequent_letter(const std::string &s)
{
    const int size = s.size();
    assert(size > 0);

    std::vector<int> freq('z' - 'a' + 1, 0);
    for (int i = 0; i < size; ++i)
        ++freq[s[i] - 'a'];

    int max = 0;
    for (int i = 1; i < 26; ++i)
    {
        if (freq[i] > freq[max])
            max = i;
    }

    return char('a' + max);
}

/*
 * @pre size > 0
 * @post prints strings with len >= avg
 */
void print_above_avg(const std::vector<std::string> &seq, double avg)
{
    const int size = seq.size();
    assert(size > 0);

    for (int i = 0; i < size; ++i)
    {
        if (seq[i].size() >= avg)
            std::cout << seq[i] << ": " << most_frequent_letter(seq[i]) << std::endl;
    }
}

int main(void)
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    std::vector<std::string> seq = read_strings();
    double                   avg = average_length(seq);

    std::cout << avg << std::endl;
    print_above_avg(seq, avg);

    return 0;
}
