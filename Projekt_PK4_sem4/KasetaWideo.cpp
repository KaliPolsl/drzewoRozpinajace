#include "KasetaWideo.h"
#include <iostream>

KasetaWideo::KasetaWideo(const std::string& t, int r) : tytul(t), rok_wydania(r) {}

void KasetaWideo::wyswietl() const {
    std::cout << "Kaseta Wideo: " << tytul << ", Rok wydania: " << rok_wydania << std::endl;
}

int KasetaWideo::getRokWydania() const {
    return rok_wydania;
}
