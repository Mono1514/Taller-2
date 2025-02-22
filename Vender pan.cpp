#include <iostream>
using namespace std;

int main() {
    // Ejercicio uno, vender pan
    // 1. El cliente llega a pedir cierta cantidad de pan. 10ss
    // 2. Nos dice la cantidad de pan.
    // 3. Se le entrega el pan.

    int pan = 3000;
    string entrada = "Buenos días, ¿cuánto de pan quieres?: ";
    cout << entrada; 

    // Esta es la entrada
    int cantidad;
    cin >> cantidad; 

    int proceso = cantidad / 500; 

    // Esta es la salida
    cout << "Toma tus " << proceso << " panes" << endl;

    return 0;
}