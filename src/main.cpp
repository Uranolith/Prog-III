#include <iostream>

using namespace std;

int ohjeh(long i, double r, int j);
int ohjeh(int i, long j, double r);
int ohjeh(int i, int j);

int main() {
    ohjeh(1, 'b');
    ohjeh(1L, 1.0, 1);
    ohjeh(static_cast<int>(2.3), static_cast<int>(2.3));
    ohjeh(2.3, 1L, static_cast<double>(1));
    ohjeh(1,3);


    /*  1.	Exakte Übereinstimmung: keine Umwandlung.
     *  2.	Umwandlung von char und short nach int (integrale Erweiterung) sowie von float nach double
     *  3.	Standard-Umwandlungen wie Sie auch in C üblich sind
     *      (u. U. in Verbindung mit Informa¬tionsverlust, z. B. int nach float oder long nach int).
     */

    return 0;
}

int ohjeh(long i, double r, int j = 3) {
    std::cout << i << r << j << std::endl;
}

int ohjeh(int i, long j, double r) {
    std::cout << i << r << j << std::endl;
}

int ohjeh(int i, int j) {
    std::cout << i << j << std::endl;
}



