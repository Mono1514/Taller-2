#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main() {
   
    cout << "Dime tus valores a, b, c" << endl;

    double a, b, c;
    cout << "Valor de a: ";
    cin >> a;
    cout << "Valor de b: ";
    cin >> b;
    cout << "Valor de c: ";
    cin >> c;

    double parte1 = -b;
    double parte2 = b * b;
    double parte3 = -4 * a * c;
    double parte4 = 2 * a;

    double discriminante = parte2 + parte3;

    
    complex<double> proceso1 = sqrt(complex<double>(discriminante, 0)); 
    complex<double> resultado1 = (parte1 - proceso1) / parte4;
    complex<double> resultado2 = (parte1 + proceso1) / parte4;

    double total1 = round(resultado1.real() * 100) / 100;
    double total2 = round(resultado2.real() * 100) / 100;
    cout << "Tienes dos resultados: " << total1 << " y " << total2 << endl;

    return 0;
}





para este codigo como no me ejecutaba y solo me salia error busque en internet y me salio que para el uso de numeros complejos debia usar las librerias que se encuentran arriba 