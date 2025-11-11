#include <cassert>
#include <iostream>

/*
 * @pre 0 ≤ hour ≤ 23, 0 ≤ minute ≤ 59.
 * @post returns the total number of bell rings at the given time.
 */
int bell_count(int hour, int minute)
{
    assert(hour >= 0 && hour <= 23);
    assert(minute >= 0 && minute <= 59);

    if (minute == 0)
    {
        if (hour == 12)
            return 100 + 4;
        else if (hour == 0)
            return 12 + 4;
        return (hour % 12) + 4;
    }

    if (minute == 15)
        return 1;
    if (minute == 30)
        return 2;
    if (minute == 45)
        return 3;
    return 0;
}

int main(void)
{
    int h, m, t;
    while (std::cin >> h >> m >> t)
    {
        int start = h * 60 + m;
        int days = t / (60 * 24);
        int end = start + (t % (60 * 24));
        int rings = 0;
        for (int i = start; i < end; ++i)
            rings += bell_count(i / 60 % 24, i % 60);
        while (days--)
            rings += 484;
        std::cout << rings << std::endl;
    }
    return 0;
}
