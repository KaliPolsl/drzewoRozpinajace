#ifndef PLYTA_MUZYCZNA_H
#define PLYTA_MUZYCZNA_H

#include "Pozycja.h"
#include <string>

class PlytaMuzyczna : public Pozycja {
    std::string tytul;
    int rok_wydania;
public:
    PlytaMuzyczna(const std::string& t, int r);
    void wyswietl() const override;
    int getRokWydania() const override;
};

#endif // PLYTA_MUZYCZNA_H
