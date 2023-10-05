#include <iostream>
using namespace std;

int main() {
    float perimetro, area, base, altezza;

    cout << "Inserisci il perimetro del rettangolo: ";
    cin >> perimetro;

    cout << "Inserisci l'altezza del rettangolo: ";
    cin >> altezza;

    base = (perimetro - (altezza * 2)) / 2;
    area = base * altezza;

    cout << "L'area e': " << area << endl;

    return 0;
}