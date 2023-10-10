#include <iostream>
#include <cmath>
using namespace std;

// Data l’area di un rettangolo determinare il rettangolo di
// perimetro minimo

int main() {
    // Dichiarazione delle variabili
    float area, perimetro;

    // Input
    cout << "Inserire l'area: ";
    cin >> area;

    // Logica del programma
    perimetro = sqrt(area) * 4; // Per definizione, in un quadrato ed un rettangolo con la stessa area,
                                // il perimetro del quadrato sarà sempre minore, quindi mi calcolo il 
                                // perimetro di un quadrato (e' un rettangolo!)

    // Output
    cout << "Il perimetro minimo e': " << perimetro << endl;

    system("PAUSE");
}