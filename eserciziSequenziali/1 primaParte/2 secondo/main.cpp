#include <iostream>
using namespace std;

// Calcolare l'area di un rettangolo date le misure del
// perimetro e dell'altezza.

int main() {
    // Dichiarazione delle variabili
    float perimetro, area, base, altezza;

    // Input
    cout << "Inserisci il perimetro del rettangolo: ";
    cin >> perimetro;

    cout << "Inserisci l'altezza del rettangolo: ";
    cin >> altezza;

    // Logica del programma
    base = (perimetro - (altezza * 2)) / 2;
    area = base * altezza;

    // Output
    cout << "L'area e': " << area << endl;

    system("PAUSE");
}