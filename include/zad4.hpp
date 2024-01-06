#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle> v)
{
    double M;
    std::size_t porcje = 1u;

    for (auto iter = v.crbegin(), iter != v.crend(), iter++)
    {
        M += iter->ileMaki(porcje++);
    }

    if (M > 100)
    {
        throw(1);
    }
    else if (M > 50 && M <= 100)
    {
        throw(1.1);
    }
    else if (M <= 50 && M > 0)
    {
        return M;
    }
}
