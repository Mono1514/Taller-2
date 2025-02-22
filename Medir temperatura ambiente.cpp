#include <iostream>
using namespace std;

int main() {
    
    string entrada = "Conversión de grados C° a F°, coloca los grados C°: ";
    cout << entrada; 

   
    int gradosC;
    cin >> gradosC; 

    double conversion = (gradosC * 9.0 / 5.0) + 32;

    cout << "La temperatura es de " << conversion << " grados F°" << endl; 

    return 0;
}

