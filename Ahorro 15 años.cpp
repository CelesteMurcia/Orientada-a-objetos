#include <iostream>
#include <iomanip>

// Nombre:
// Descripccion: Lanza en la pantalla el ahorro total despues de 15 años con un deposito de $15,000 y una tasa mensal de 3.7%  

using namespace std;

int main() {

    double deposito = 15000.0;
    double tasa_mensual = 0.037;
    int meses = 15 * 12; 
    
    double total = 0.0;
    

    for (int mes = 1; mes <= meses; mes++) {
        total = total * (1 + tasa_mensual) + deposito;
    }
    
    cout << fixed << setprecision(2);
    cout << "Cantidad ahorrada despues de 180 meses: $" << total << endl;
    
    return 0;
}
