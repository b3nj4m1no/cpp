#include <iostream>
#include <iomanip> // Yeah, for precision!
using namespace std;

// Di un oggetto si conosce il prezzo comprensivo dell'IVA;
// determinarne il prezzo netto.

int main() {
  // Dichiarazione delle variabili
  double prezzoFinale, iva, prezzoNetto;

  // Input
  cout << "Inserisci il prezzo comprensivo dell'IVA: ";
  cin >> prezzoFinale;

  cout << "Inserisci l'aliquota IVA: ";
  cin >> iva;

  // Logica del programma
  prezzoNetto = prezzoFinale / (1 + iva / 100);

  // Output
  // setprecision(4) imposta 4 cifre significative alla variabile prezzoNetto
  cout << "Il prezzo netto e': " << setprecision(4) << prezzoNetto << " euro" << endl;

  system("PAUSE");
}