#include <iostream>
using namespace std;

// Calcolare l'area di un trapezio, conoscendo la base
// maggiore e sapendo che l'altezza è doppia della base
// minore, mentre la loro somma è uguale alla base maggiore.

int main() {
    // Dichiarazione delle variabili
    float area, baseMaggiore, baseMinore, altezza;

    // Input
    cout << "Inserire la base maggiore: ";
    cin >> baseMaggiore;

    // Logica del programma
    baseMinore = baseMaggiore / 3;
    altezza = baseMaggiore - baseMinore;
    area = (baseMaggiore + baseMinore) * altezza / 2;

    // Output
    cout << "L'area del trapezio e': " << area << endl;

    system("PAUSE");
}