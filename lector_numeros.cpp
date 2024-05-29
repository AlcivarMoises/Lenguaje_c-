//5) Diseñe un programa que lea un número comprendido entre 1 y 9.999.999. El programa debe imprimir de cuentas cifras se compone el número.

//Por ejemplo el número es 345, se compone de 3 cifras

//Por ejemplo el número es 999, se compone de 3 cifras

//Por ejemplo el número es 1345, se compone de 4 cifras

//Por ejemplo el número es 78, se compone de 2 cifras

#include <iostream>
#include <cmath>

using namespace std;

int contarCifras(int numero) {
    int cifras = 0;

   
    if (numero == 0) {
        return 1;
    }

    
    while (numero != 0) {
        cifras++;
        numero /= 10;
    }

    return cifras;
}

int main() {
    int numero;

    cout << "Ingrese un numero entre 1 y 9,999,999: ";
    cin >> numero;

   
    if (numero < 1 || numero > 9999999) {
        cout << "El numero ingresado esta fuera del rango permitido." << endl;
        return 1;
    }

  
    int cifras = contarCifras(numero);

    cout << "El numero " << numero << " se compone de " << cifras << " cifras." << endl;

    return 0;
}
