#include <iostream>
#include <windows.h>    // Solamente per avere l'output colorato
using namespace std;

// Calcolare il prezzo di un articolo conoscendo il prezzo base,
// lo sconto percentuale da applicare e l’iva.

int main() {
    float prezzoBase, prezzoScontato, prezzoFinale, iva, sconto;

    // 0 per lo sfondo (Nero)
    // A per il colore del testo (Verde)
    system("Color 0A"); 

    cout << "Inserisci il prezzo base: ";
    cin >> prezzoBase;

    cout << "Inserisci lo sconto percentuale: ";
    cin >> sconto;

    cout << "Inserisci l'iva: ";
    cin >> iva;

    prezzoScontato = prezzoBase - (prezzoBase * (sconto / 100));
    prezzoFinale = prezzoScontato + (prezzoScontato * (iva / 100));

    cout << "Il prezzo finale e': " << prezzoFinale;
    
    return 0;
}