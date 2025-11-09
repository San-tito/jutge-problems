#include <cassert>
#include <iostream>

/*
 * @pre word ∈ {"setmanal", "mensual", "trimestral", "semestral"}.
 * @post returns the yearly frequency (52, 12, 4, or 2).
 */
int get_frequency(const std::string &word)
{
    assert(word == "setmanal" or word == "mensual" or word == "trimestral" or word == "semestral");

    if (word == "setmanal")
        return 52;
    if (word == "mensual")
        return 12;
    if (word == "trimestral")
        return 4;
    return 2;
}

int main(void)
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);

    double      interest;
    std::string period;
    std::cin >> interest >> period;

    int    frequency = get_frequency(period);
    double percent(1 + interest / frequency * 0.01);
    double tae(interest);
    while (frequency--)
        tae *= percent;

    std::cout << 100 * (tae / interest - 1) << std::endl;

    return 0;
}
