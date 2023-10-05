#include <iostream>
using namespace std;

int main() {
    float perimetro, area, base, altezza;

    cout << "Inserisci l'area del rettangolo: ";
    cin >> area;

    cout << "Inserisci la base del rettangolo: ";
    cin >> base;

    altezza = area / base;
    perimetro = 2 * (altezza + base);

    cout << "Il perimetro e': " << perimetro << endl;

    return 0;
}