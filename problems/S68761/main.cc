#include <iostream>
#include <string>
#include <vector>

#ifndef PERSONA
#define PERSONA

struct Persona
{
    std::string nom;
    int         edat;
};
#endif

/* PRE:  persones és un vector de persones ordenat per edat.
   POST: torna l'índex de la primera persona amb exactament 'anys' anys, o -1 si no n'hi ha cap. */
int cerca_per_edat(const std::vector<Persona> &persones, int anys)
{
    const int size = persones.size();
    int       left = 0;
    int       right = size - 1;

    int res = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (persones[mid].edat >= anys)
        {
            if (persones[mid].edat == anys)
                res = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return res;
}

int main(void)
{
    int n;
    std::cin >> n;

    std::vector<Persona> persones(n);

    for (int i = 0; i < n; ++i)
        std::cin >> persones[i].nom >> persones[i].edat;

    int anys;
    while (std::cin >> anys)
    {
        int r = cerca_per_edat(persones, anys);
        std::cout << r << std::endl;
    }

    return 0;
}
