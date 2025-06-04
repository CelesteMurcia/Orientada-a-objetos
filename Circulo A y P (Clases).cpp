#include <iostream>

// Nombre: Celeste Itzayana Murcia Zuñiga
// Descripccion: Realiza el mismo preocedimiento que el anterior pero el codigo esta hecho con clases.  

using namespace std;

class Circulo
{
	private:
		float resultado;
	public:
		float pi = 3.1416;
		float radio;
		
		float area(){
			resultado = pi * (radio * radio);
			return resultado;
		}
		float perimetro(){
			resultado = 2 * pi * radio;
			return resultado;
		}
};

main()
{
	char opcion;
	float radio;
	Circulo obj;
	
	cout << "Calcular (A)Area o (P)Perimetro? ";
	cin >> opcion;
	
	cout << "Ingresa el radio del circulo: ";
	cin >> obj.radio;
	
	if (opcion == 'a'||opcion == 'A'){
		cout << "El area del circulo es: " << obj.area();
	}
	if (opcion == 'p'||opcion == 'P'){
		cout << "El perimetro del circuo es: " << obj.perimetro();
	}
}
