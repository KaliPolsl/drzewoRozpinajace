#ifndef BAZA_DANYCH_H
#define BAZA_DANYCH_H

#include "Pozycja.h"
#include <vector>

class BazaDanych {
public:
    std::vector<Pozycja*> pozycje;
    void dodajPozycje(Pozycja* p);
    void wyswietlWszystkie() const;
    void wyszukajPoRoku(int rok) const;
    ~BazaDanych();
};

#endif // BAZA_DANYCH_H
