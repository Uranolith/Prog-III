#include <iostream>
#include "punkt.h"

Punkt::Punkt(int x, int y) {
    setX(x);
    setY(y);
}

void Punkt::setX(int x) {
    this->x = x;
}

void Punkt::setY(int y) {
    this->y = y;
}

void Punkt::print() const {
    std::cout << "(" << x << "|" << y << ")" << std::endl;
}

int Punkt::getX() const {
    return x;
}

int Punkt::getY() const {
    return y;
}
