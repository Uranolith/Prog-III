#include <iostream>

int main() {
    int *x = new int;                                       // x ist adresse     * -> value  //  & -> adresse
    int *y = new int;                                       // y ist adresse     * -> value  //  & -> adresse

    std::cout << "x adresse: " << x << "\t";
    std::cout << "y adresse: " << y << std::endl;

    swapi(*x, *y);                                          // übergabe VALUE


    std::cout << "x adresse: " << x << "\t";
    std::cout << "y adresse: " << y << std::endl;

    return 0;
}


