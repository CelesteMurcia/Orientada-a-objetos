#include <iostream>

// Nombre: Celeste Itzayana Murcia Zuñiga
// Descripccion: EL usuario ingresa la base y altura, despues el programa lanza el area del triangulo 

using namespace std;

main()
{
	float base, altura, area;
	
	cout << "Introduce la base del triangulo: ";
	cin >> base;
	
	cout << "Introduce la altura del triangulo: ";
	cin >> altura;
	
	area = (base * altura)/2;
	
	cout << "El area del triangulo es: " << area;
	
	return 0;
}

