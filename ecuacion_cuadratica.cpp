//Codifique la ecuación cuadrática - solucionado en clases.
#include <iostream>
#include <cmath>

using namespace std;

void solveQuadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "La ecuación no tiene soluciones reales." << endl;
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "La ecuación tiene una solución real: x = " << x << endl;
    } else {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "La ecuación tiene dos soluciones reales: x1 = " << x1 << " y x2 = " << x2 << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Ingrese los coeficientes a, b y c de la ecuación cuadrática (ax^2 + bx + c): ";
    cin >> a >> b >> c;

    solveQuadratic(a, b, c);

    return 0;
}
