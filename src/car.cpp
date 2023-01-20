#include <iostream>
#include <cstring>
#include "car.h"

Car::Car(unsigned long fgstnr, char *marke, unsigned int leistung) {
    this->fgstnr = fgstnr;
    this->marke = strdup(marke);
    this->leistung = leistung;
    this->print();
}

Car::Car(const Car &other){
    copy(other);
}

Car &Car::operator=(Car const& other){
    if(this != &other){
        //Speicher freiräumen
        delete[] this->marke;
        copy(other);
    }
    return *this;
}

Car::~Car() {

}

const char *Car::getMarke() const {
    return this->marke;
}

const unsigned long Car::getFgstnr() const {
    return this->fgstnr;
}

const unsigned int Car::getLeistung() const {
    return this->leistung;
}

void Car::print() {
    std::cout << "Pkw der Marke " << marke << " mit der Fahrgestellnummer "
              << fgstnr << " und Leistung " << leistung << " erzeugt" << std::endl;
}

void Car::setMarke(char *sm) {
    strcpy(this->marke, sm);

}

void Car::setFgestnr(unsigned long nr) {
    this->fgstnr = nr;
}

void Car::setLeistung(unsigned int ps) {
    this->leistung = ps;
}

void Car::copy(const Car &other) {
    this->fgstnr = other.fgstnr;
    this->leistung = other.leistung;              // Aufruf in C: this->marke = malloc(sizeof(char) * anzahlZeichen);
    this->marke = strdup(other.marke);            //              strcpy(this->marke, other.marke);
}


