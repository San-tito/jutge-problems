#include <cmath>
#include <iostream>

int main(void)
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(6);

    int n;
    std::cin >> n;
    while (n--)
    {
        double      area = 0;
        std::string shape;
        std::cin >> shape;
        if (shape == "rectangle")
        {
            double length, width;
            std::cin >> length >> width;
            area = length * width;
        }
        else if (shape == "circle")
        {
            double radius;
            std::cin >> radius;
            area = M_PI * radius * radius;
        }
        std::cout << area << std::endl;
    }
    return 0;
}
