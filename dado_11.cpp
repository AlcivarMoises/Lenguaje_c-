//4) Diseñe el programa que simula el lanzamiento de 2 dados. Un usuario gana cuando ambos dados sacan el mismo número, o cuando la sumatoria de las mismas es 11. Debe utilizar números aleatorios.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   
    srand(time(0));

    int dado1 = rand() % 6 + 1;

    int dado2 = rand() % 6 + 1;

    cout << "Resultado del primer dado: " << dado1 << endl;
    cout << "Resultado del segundo dado: " << dado2 << endl;

    
    if (dado1 == dado2 || dado1 + dado2 == 11) {
        cout << "¡Felicidades, has ganado!" << endl;
    } else {
        cout << "Lo siento, no has ganado esta vez. Intenta de nuevo." << endl;
    }

    return 0;
}
