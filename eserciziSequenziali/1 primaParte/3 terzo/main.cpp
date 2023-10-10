#include <iostream>
using namespace std;

// Calcolare l'area di un triangolo rettangolo data la misura
// del cateto minore e sapendo che un cateto è 3/5 dell'altro.

int main() {
    // Dichiarazione delle variabili
    int area, catetoMinore, catetoMaggiore;

    // Input
    cout << "Inserire la misura del cateto minore: ";
    cin >> catetoMinore;

    // Logica del programma
    catetoMaggiore = (catetoMinore / 3) * 5;
    area = (catetoMaggiore * catetoMinore) / 2;

    // Output
    cout << "L'area del triangolo e': " << area << endl;

    system("PAUSE");
}