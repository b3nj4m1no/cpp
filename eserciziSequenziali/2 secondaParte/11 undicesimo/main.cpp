#include <iostream>
using namespace std;

// Un rappresentante di commercio guadagna un fisso
// mensile di 1.000 € più 200 € per ogni enciclopedia
// venduta. Quanto guadagna al mese, sapendo che gli viene
// trattenuto il 18%?

int main() {
    // Dichiarazione delle variabili
    int fisso = 1000, vendita = 200, numeroVendite, guadagnoVendite;
    double iva = 0.18, guadagnoTotale, trattenuta, guadagnoNetto;

    // Input
    cout << "Inserisci il numero di enciclopedie vendute al mese: ";
    cin >> numeroVendite;

    // Calcolo del guadagno totale
    guadagnoVendite = numeroVendite * vendita;
    guadagnoTotale = fisso + guadagnoVendite;

    // Calcolo dell'importo trattenuto
    trattenuta = guadagnoTotale * iva;

    // Calcolo del guadagno netto
    guadagnoNetto = guadagnoTotale - trattenuta;

    // Output del guadagno netto
    cout << "Il guadagno netto mensile del rappresentante di commercio e': " << guadagnoNetto << " euro" << endl;

    system("PAUSE");
}
