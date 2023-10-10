#include <iostream>
using namespace std;

// Un'automobile percorre 20 km con un litro di benzina.
// Calcolare la spesa necessaria a percorrere 100 km.

// [*] Svolgere lo stesso problema cercando di generalizzare l’algoritmo

int main() {
    // Dichiarazione delle variabili
    float costoLitro, spesa, kilometriPerLitro, kilometriTotali;

    // Input
    cout << "Inserire il costo della benzina al litro: ";
    cin >> costoLitro;

    cout << "Inserire quanti kilometri percorre per ogni litro: ";
    cin >> kilometriPerLitro;

    cout << "Quanti kilometri bisogna percorrere?: ";
    cin >> kilometriTotali;

    // Logica del programma
    spesa = (kilometriTotali / kilometriPerLitro) * costoLitro;

    // Output
    cout << "La spesa necessaria e': " << spesa << endl;

    system("PAUSE");
}