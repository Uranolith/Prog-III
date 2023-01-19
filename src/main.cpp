#include <iostream>
#include "car.h"

int main() {
    Car p1(1001,"Beetle", 115);
    p1.print();
    Car p2(1234);
    p2.print();
    std::cout << "---------\n";
    p2.setMarke("Lada");
    p2.setLeistung(125);
    p2.print();

    return 0;
}
