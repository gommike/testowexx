#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem

template < typename T >
std::size_t polejSosem(const Tagliatelle& t, const T& sos)
{
    return sos.polej(t);
}

template < typename T >
std::size_t polejSosem(const Tagliatelle&t, const T& sos) //zmienna stala 't' i 'sos' gdzie jedna jest referencja do tagliatelle a druga do T
{
    return sos.polej(tagliatelle);
}