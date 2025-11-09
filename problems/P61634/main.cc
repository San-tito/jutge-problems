#include <cassert>
#include <iostream>

/*
 * @pre year ∈ [1800, 9999].
 * @post returns true if year is leap.
 */
bool is_leap_year(int year)
{
    assert(year >= 1800 and year <= 9999);

    year /= (year % 100 == 0) ? 100 : 1;
    return year % 4 == 0;
}

int main(void)
{
    int year;
    std::cin >> year;

    if (is_leap_year(year))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}
