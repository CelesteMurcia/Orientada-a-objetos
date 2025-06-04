#include <iostream>
#include <algorithm>
#include <numeric>

// Nombre: Celeste Itzayana Murcia Zuñiga
// Descripccion: El usuario ingresa 10 numeros y muestra como resultado los mismos numeros ingresados pero de manera ascendente

using namespace std;

int main(){
	
	int Tamano = 10;
	double numeros[Tamano];
	
	cout << "Ingresa 10 numeros:\n";
	
	for(int i = 0; i < Tamano; ++i){
		cout << "Valor " << i + 1 << ": ";
		cin >> numeros[i];
	}
	sort(numeros, numeros + Tamano);
	
	cout << "\nValores ordenados de manera ascendente:\n";
	
	for(int i = 0; i < Tamano; ++i){
		cout << numeros[i] << " ";
	}
	return 0;
}
