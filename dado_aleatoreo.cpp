// Diseñe el programa que genera un número aleatorio entre 1 y 6. Si el número es impar se muestra "Felicidades, ganaste", de lo contrario "Perdiste, sigue intentando"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));

    
    int randomNum = rand() % 6 + 1;

    cout << "El resultado del lanzamiento del dado es: ";
    switch(randomNum) {
        case 1:
            cout << "*";
            break;
        case 2:
            cout << "- -";
            break;
        case 3:
            cout << "+ + +";
            break;
        case 4:
            cout << "@ @ @ @";
            break;
        case 5:
            cout << "|   |   |   |   |";
            break;
        case 6:
            cout << ":-)    :-)    :-)    :-)    :-)    :-)";
            cout << "\n¡Felicidades, has ganado!";
            break;
        default:
            cout << "Error: número no válido.";
    }
    cout << endl;

    return 0;
}
