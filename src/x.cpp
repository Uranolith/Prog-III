#include <iostream>
#include "x.h"

X::X(int e) : a(e) {
    std::cout << "Konstruktor" << std::endl;
    c = a;
    b = &e;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << *b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
}

X::~X() {
    std::cout << "Dekonstruktor" << std::endl;
    // delete a;

    // std::cout << "delete d" << std::endl;
    // delete d;
    // std::cout << "delete d erfolgreich" << std::endl;

    // std::cout << "delete[] d" << std::endl;
    // delete[] d;
    // std::cout << "delete[] d erfolgreich" << std::endl;
}
