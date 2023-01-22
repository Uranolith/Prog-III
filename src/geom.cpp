#include <iostream>
#include <cmath>
#include "geom.h"

Geom::Geom(Punkt p, int radius) {
    this->typ = KREIS;
    this->laenge = -1;
    this->breite = -1;
    this->radius = radius;
    this->position = p;
    this->farbe = BLAU;
}

Geom::Geom(Punkt p, int laenge, int breite) {
    laenge == breite ? this->typ = QUADRAT : this->typ = RECHTECK;
    this->laenge = laenge;
    this->breite = breite;
    this->radius = -1;
    this->position = p;
    this->farbe = BLAU;
}

void Geom::setFarbe(int farbe) {
    this->farbe = farbe;
}

double Geom::getUmfang() const {
    double tmp = 0;
    if (this->typ == KREIS) {
        tmp = 2 * M_PI * this->radius;
    } else {
        tmp = (this->laenge * 2) + (this->breite * 2);
    }
    return tmp;
}

double Geom::getFlaeche() const {
    double tmp = 0;
    if (this->typ == KREIS) {
        tmp = M_PI * powf((float) this->radius, 2);
    } else {
        tmp = (this->laenge * this->breite);
    }
    return tmp;
}

void Geom::setLaenge(int laenge) {
    this->laenge = laenge;
    checkType();
}

void Geom::setBreite(int breite) {
    this->breite = breite;
    checkType();
}

void Geom::setRadius(int r) {
    this->radius = r;
}

void Geom::print() const {
    std::cout << "Typ: " << typ << std::endl;
    if (typ == KREIS) {
        std::cout << "Radius: " << radius << std::endl;
    } else {
        std::cout << "Laenge: " << laenge << std::endl;
        std::cout << "Breite: " << breite << std::endl;
    }
    std::cout << "Farbe: " << farbe << std::endl;
    std::cout << "Punkt: " << position << std::endl;
}

bool Geom::Enthaelt(Punkt p) {
    bool enthalten = false;

    switch (this->typ) {
        case RECHTECK:
        case QUADRAT: {
            float aX = (float) (this->position.getX()) - ((float) (this->laenge) / 2);
            float aY = (float) (this->position.getY()) - ((float) (this->breite) / 2);
            float bX = aX + (float) (this->laenge);
            float cY = aY + (float) (this->breite);

            if (aX <= (float) p.getX() && (float) p.getX() <= bX && aY <= (float) p.getY() && (float) p.getY() <= cY) {
                std::cout << "Punkt " << p << " ist enthalten" << std::endl;
                enthalten = true;
            } else {
                std::cout << "Punkt " << p << " ist nicht enthalten" << std::endl;
            }
            break;
        }
        case KREIS: {
            float vX = (float) p.getX() - (float) this->position.getX();
            float vY = (float) p.getY() - (float) this->position.getY();

            if (sqrtf(powf(vX, 2) + powf(vY, 2)) <= (float) (this->radius)) {
                std::cout << "Punkt " << p << " ist enthalten" << std::endl;
                enthalten = true;
            } else {
                std::cout << "Punkt " << p << " ist nicht enthalten" << std::endl;
            }
            break;
        }
    }
    return enthalten;
}

void Geom::checkType() {
    if (this->laenge == -1 || this->breite == -1) {
        this->typ = KREIS;
    } else if (this->laenge == this->breite) {
        this->typ = RECHTECK;
    } else {
        this->typ = QUADRAT;
    }
}