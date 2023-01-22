#include <iostream>
#include "geom.h"

int main() {
    Punkt p1(0, 0);
    Punkt p2(3, 4);
    Geom g1(p1, 5);
    Geom g2(p2, 4, 4);
    g1.print();
    g2.print();
    g2.setLaenge(5);
    Punkt pt1(2, 2);
    Punkt pt2(5, 15);
    g1.Enthaelt(pt1);
    g1.Enthaelt(pt2);
    g2.Enthaelt(pt1);
    g2.Enthaelt(pt2);
    if (g1.getUmfang() > g2.getUmfang()) {
        std::cout << "Umfang von g1 > g2" << std::endl;
    } else {
        std::cout << "Umfang von g1 <= g2" << std::endl;
    }

    return 0;
}
