#include <iostream>
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
        tmp = this->radius * 2 * PI;
    } else {
        tmp = (this->laenge * 2) + (this->breite * 2);
    }
    return tmp;
}

double Geom::getFlaeche() const {
    double tmp = 0;
    if (this->typ == KREIS) {
        tmp = PI * (this->radius * this->radius);
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
    std::cout << "Punkt: ";
    position.print();
    std::cout << std::endl;
}

bool Geom::Enthaelt(Punkt p) {
    switch (this->typ){
        case RECHTECK:
        case QUADRAT:                                               
                                // position +- halbe länge in x und y Richtung <= p
            break;
        case KREIS:
                                // Betrag des Vektors v (v = p - position) kleiner oder gleich radius
            break;
    }
    return FALSE;
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