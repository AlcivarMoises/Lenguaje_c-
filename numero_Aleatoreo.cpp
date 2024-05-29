//2) Diseñe el programa que genera un número aleatorio entre 1 y 6. Si el número es impar se muestra "Felicidades, ganaste", de lo contrario "Perdiste, sigue intentando"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));

    
    int randomNumber = rand() % 6 + 1;

    
    if (randomNumber % 2 != 0) {
        cout << "Felicidades, ganaste!" << endl;
    } else {
        cout << "Perdiste, sigue intentando." << endl;
    }

    return 0;
}
