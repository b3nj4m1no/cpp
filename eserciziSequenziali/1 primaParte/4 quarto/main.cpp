#include <iostream>
using namespace std;

// Calcolare il prezzo di un articolo conoscendo il prezzo base,
// lo sconto percentuale da applicare e l’iva.

int main() {
    // Dichiarazione delle variabili
    float prezzoBase, prezzoScontato, prezzoFinale, iva, sconto;

    // Input
    cout << "Inserisci il prezzo base: ";
    cin >> prezzoBase;

    cout << "Inserisci lo sconto percentuale: ";
    cin >> sconto;

    cout << "Inserisci l'iva: ";
    cin >> iva;

    // Logica del programma
    prezzoScontato = prezzoBase - (prezzoBase * (sconto / 100));
    prezzoFinale = prezzoScontato + (prezzoScontato * (iva / 100));

    // Output
    cout << "Il prezzo finale e': " << prezzoFinale;
    
    system("PAUSE");
}