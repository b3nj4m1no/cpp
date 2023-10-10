#include <iostream>
using namespace std;

// Un'automobile percorre 20 km con un litro di benzina.
// Calcolare la spesa necessaria a percorrere 100 km.

int main() {
    // Dichiarazione delle variabili
    float costoLitro, spesa;

    // Input
    cout << "Inserire il costo della benzina al litro: ";
    cin >> costoLitro;

    // Logica del programma
    spesa = (100 / 20) * costoLitro;

    // Output
    cout << "La spesa necessaria e': " << spesa << endl;

    system("PAUSE");
}