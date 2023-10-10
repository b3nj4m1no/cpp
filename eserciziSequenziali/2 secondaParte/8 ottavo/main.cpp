#include <iostream>
#include <cmath> // Per le potenze
using namespace std;

// Calcolare il quadrato del successivo del doppio di un numero.

int main() {
    // Dichiarazione delle variabili
    long long int numero;

    // Input
    cout << "Inserisci un numero: ";
    cin >> numero;

    // Logica del programma
    numero = pow((numero * 2 + 1), 2);

    // Output
    cout << "il quadrato del successivo del doppio e': " << numero << endl;

    system("PAUSE");
}