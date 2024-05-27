#include "BazaDanych.h"
#include <iostream>

void BazaDanych::dodajPozycje(Pozycja* p) {
    pozycje.push_back(p);
}

void BazaDanych::wyswietlWszystkie() const {
    for (const auto& p : pozycje) {
        p->wyswietl();
    }
}

void BazaDanych::wyszukajPoRoku(int rok) const {
    for (const auto& p : pozycje) {
        if (p->getRokWydania() == rok) {
            p->wyswietl();
        }
    }
}

BazaDanych::~BazaDanych() {
    for (auto& p : pozycje) {
        delete p;
    }
}
