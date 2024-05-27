#ifndef KASETA_AUDIO_H
#define KASETA_AUDIO_H

#include "Pozycja.h"
#include <string>

class KasetaAudio : public Pozycja {
    std::string tytul;
    int rok_wydania;
public:
    KasetaAudio(const std::string& t, int r);
    void wyswietl() const override;
    int getRokWydania() const override;
};

#endif // KASETA_AUDIO_H
