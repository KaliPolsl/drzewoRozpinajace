#include "PlytaMuzyczna.h"
#include <iostream>

PlytaMuzyczna::PlytaMuzyczna(const std::string& t, int r) : tytul(t), rok_wydania(r) {}

void PlytaMuzyczna::wyswietl() const {
    std::cout << "Plyta Muzyczna: " << tytul << ", Rok wydania: " << rok_wydania << std::endl;
}

int PlytaMuzyczna::getRokWydania() const {
    return rok_wydania;
}
