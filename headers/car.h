#ifndef PROG3_CAR_H
#define PROG3_CAR_H

class Car {
private:
    char *marke;
    unsigned long fgstnr;
    unsigned int leistung;

public:
    // Überladener Konstruktor
    Car(unsigned long fgstnr, char *marke = "Mercedes", unsigned int leistung = 100);
    // Kopierkonstruktor
    Car(const Car &other);
    // überladener Zuweisungsoperator
    Car &operator=(Car const& other);
    // Destruktor
    ~Car();

    const char *getMarke() const;
    const unsigned long getFgstnr() const;
    const unsigned int getLeistung() const;

    void copy(Car const& other);

    void setMarke(char *);
    void setFgestnr(unsigned long);
    void setLeistung(unsigned int);


    void print();

};



#endif //PROG3_CAR_H