#include <iostream>
#include <iomanip>

// Nombre: Celeste Itzayana Murcia Zuñiga
// Descripccion: Lanza en la pantalla el ahorro total despues de 10 años con un deposito de $1000 y una tasa mensal de 3% 

using namespace std;

int main() {

    double deposito = 1000.0;
    double tasa_mensual = 0.03;
    int meses = 10 * 12; 
    
    double total = 0.0;
    

    for (int mes = 1; mes <= meses; mes++) {
        total = total * (1 + tasa_mensual) + deposito;
    }
    
    cout << fixed << setprecision(2);
    cout << "Cantidad ahorrada despues de 120 meses: $" << total << endl;
    
    return 0;
}

