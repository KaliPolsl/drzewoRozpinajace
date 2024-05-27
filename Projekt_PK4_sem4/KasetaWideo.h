#ifndef KASETA_WIDEO_H
#define KASETA_WIDEO_H

#include "Pozycja.h"
#include <string>

class KasetaWideo : public Pozycja {
    std::string tytul;
    int rok_wydania;
public:
    KasetaWideo(const std::string& t, int r);
    void wyswietl() const override;
    int getRokWydania() const override;
};

#endif // KASETA_WIDEO_H
