#ifndef PROG3_GEOM_H
#define PROG3_GEOM_H

#include "punkt.h"

enum Typ {
    RECHTECK = 1, QUADRAT, KREIS
};
enum Farbe {
    BLAU = 1, ROT = 2, GRUEN = 3, SCHWARZ = 4, WEISS = 5, GELB = 6
};
enum Bool {
    FALSE, TRUE
};

class Geom {
private:
    int typ;
    int laenge;
    int breite;
    int radius;
    int farbe;
    Punkt position;

public:
    Geom(Punkt p, int radius);
    Geom(Punkt p, int laenge, int breite);

    double getUmfang() const;
    double getFlaeche() const;

    void setLaenge(int laenge);
    void setBreite(int breite);
    void setRadius(int r);
    void setFarbe(int farbe);

    void print() const;
    bool Enthaelt(Punkt p);

    void checkType();
};


#endif //PROG3_GEOM_H