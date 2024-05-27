#ifndef INTERFEJS_H
#define INTERFEJS_H

#include "BazaDanych.h"

class Interfejs {
    BazaDanych baza;
public:
    void wyswietlMenu();
private:
    void zarzadzajKasetamiAudio();
    void zarzadzajKasetamiWideo();
    void zarzadzajPlytamiMuzycznymi();
    void zapiszDoPliku();
    void wczytajZPliku();
    void wyszukajPoRoku();
};

#endif // INTERFEJS_H
