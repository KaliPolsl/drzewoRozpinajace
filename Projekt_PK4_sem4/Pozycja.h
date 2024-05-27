#ifndef POZYCJA_H
#define POZYCJA_H

class Pozycja {
public:
    virtual void wyswietl() const = 0;
    virtual int getRokWydania() const = 0;
    virtual ~Pozycja() = default;
};

#endif // POZYCJA_H
