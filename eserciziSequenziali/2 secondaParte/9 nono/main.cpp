#include <iostream>
#include <cmath>
using namespace std;

// Calcolare la differenza tra il quadrato di un numero e il numero stesso.

int main() {
    // Dichiarazione delle variabili
    long long int numero;

    // Input
    cout << "Inserire un numero: ";
    cin >> numero;

    // Logica del programma
    numero = pow(numero, 2) - numero;

    // Output
    cout << "la differenza tra il quadrato di un numero e il numero stesso e': " << numero << endl;

    system("PAUSE"); 
}
