#include "KasetaAudio.h"
#include <iostream>

KasetaAudio::KasetaAudio(const std::string& t, int r) : tytul(t), rok_wydania(r) {}

void KasetaAudio::wyswietl() const {
    std::cout << "Kaseta Audio: " << tytul << ", Rok wydania: " << rok_wydania << std::endl;
}

int KasetaAudio::getRokWydania() const {
    return rok_wydania;
}
