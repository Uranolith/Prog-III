#include <iostream>
#include "x.h"


X::X(int d) {
    std::cout << "Konstruktor" << std::endl;
    this->d = new long;
}

X::~X() {
    std::cout << "Dekonstruktor" << std::endl;
    // delete a;
    std::cout << "delete d" << std::endl;
    delete d;
    std::cout << "delete d erfolgreich" << std::endl;
    // std::cout << "delete[] d" << std::endl;
    // delete[] d;
    // std::cout << "delete[] d erfolgreich" << std::endl;
}
