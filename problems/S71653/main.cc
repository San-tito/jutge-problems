#include <iostream>
#include <string>
#include <vector>

#ifndef TIPUS
#define TIPUS

struct Casa
{
    std::string nom;
    int         pos;
};

struct Poble
{
    int inici, fi;
    int num_cases;
};

#endif

void sort_cases(std::vector<Casa> &cases)
{
    const int size = cases.size();
    for (int i = 1; i < size; ++i)
    {
        Casa casa = cases[i];
        int  j;
        for (j = i; j and cases[j - 1].pos > casa.pos; --j)
            cases[j] = cases[j - 1];
        cases[j] = casa;
    }
}

/*
 * Detecta els pobles en una seqüència de cases.
 *
 * @pre  Les cases estan ordenades per nom.
 * @post Els pobles estan ordenats per posició.
 */
std::vector<Poble> detecta_pobles(std::vector<Casa> &cases)
{
    sort_cases(cases);

    std::vector<Poble> pobles;
    Poble              actual;
    actual.inici = cases[0].pos;
    actual.num_cases = 1;
    for (int i = 1; i < cases.size(); ++i)
    {
        if (cases[i].pos - cases[i - 1].pos < 3)
        {
            actual.fi = cases[i].pos;
            ++actual.num_cases;
        }
        else
        {
            if (actual.num_cases > 1)
                pobles.push_back(actual);
            actual.inici = cases[i].pos;
            actual.num_cases = 1;
        }
    }
    if (actual.num_cases > 1)
        pobles.push_back(actual);
    return pobles;
}

/*
void llegeix(std::vector<Casa> &cases, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> cases[i].nom >> cases[i].pos;
    }
}

void escriu(const std::vector<Poble> &pobles)
{
    std::cout << "___" << std::endl;
    for (unsigned int i = 0; i < pobles.size(); i++)
    {
        const Poble &p = pobles[i];
        std::cout << p.inici << " " << p.fi << " " << p.num_cases << std::endl;
    }
    std::cout << std::endl;
}

int main(void)
{
    int n;
    while (std::cin >> n)
    {
        std::vector<Casa> cases(n);
        llegeix(cases, n);
        std::vector<Poble> pobles = detecta_pobles(cases);
        escriu(pobles);
    }

    return 0;
}
*/
