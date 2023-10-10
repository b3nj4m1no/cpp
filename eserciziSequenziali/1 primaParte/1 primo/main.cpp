#include <iostream>
using namespace std;

// Calcolare il perimetro di un rettangolo date le misure
// dell'area e della base.

int main() {
    // Dichiarazione delle variabili
    float perimetro, area, base, altezza;

    // Input
    cout << "Inserisci l'area del rettangolo: ";
    cin >> area;

    cout << "Inserisci la base del rettangolo: ";
    cin >> base;

    // Logica del programma
    altezza = area / base;
    perimetro = 2 * (altezza + base);

    // Output
    cout << "Il perimetro e': " << perimetro << endl;

    system("PAUSE");
}