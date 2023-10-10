#include <iostream>
#include <cmath> // Per le potenze obv
using namespace std;

// Calcolare il successivo del doppio del quadrato di un numero.

int main() {
    // Dichiarazione delle variabili
    long long int numero;

    // Input
    cout << "Inserire un numero: ";
    cin >> numero;

    // Logica del programma
    numero = pow(numero, 2) * 2 + 1; // pow(numero, 2) semplicemente calcola il quadrato di numero

    // Output
    cout << "Il successivo del doppio del quadrato e': " << numero << endl;

    system("PAUSE"); 
}