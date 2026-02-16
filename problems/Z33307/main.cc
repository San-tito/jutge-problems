#include <iostream>

/* Imprimeix per pantalla tots els enters des de end fins a start
   (ambdós inclosos), de major a menor, separats per un sol espai.
   Precondició: start > 0, end > 0, start <= end. */
void range(int start, int end)
{
    if (start == end)
        std::cout << start;
    else
    {
        std::cout << end << ' ';
        range(start, end - 1);
    }
}

int main(void)
{
    int start, end;
    while (std::cin >> start >> end)
    {
        range(start, end);
        std::cout << std::endl;
    }

    return 0;
}
