#include <string>
#include <iostream>

// Nombre: Celeste Itzayana Murcia Zuñiga
// Descripccion: Muestra el proceso de una maquina de estados finitos, dependiendo de la secuencia de lestras ingresada y al final muestra el estado en donde quedo
using namespace std;

main(){
	
	string texto;
	string estado = "S1";
	
	cout << "Ingrese la secuencia de letras: ";
	cin >> texto;
	
	for(int i = texto.length()-1; i >= 0; --i){
		char letra = texto[i];
		
		if(letra < 'a' || letra > 'd'){
			cout << "La " << letra << " no es valida" << endl;
			return 1;
		}
		
		string anterior = estado;
		
		if(estado == "S1" && letra == 'a'){
			estado = "S2";
		}
		else if(estado == "S2" && letra =='a'){
			estado = "S2";
		}
		else if(estado == "S2" && letra == 'c'){
			estado = "S4";
		}
		else if(estado == "S2" && letra == 'b'){
			estado = "S1";
		}
		else if(estado == "S3" && letra == 'b'){
			estado = "S4";
		}
		else if(estado == "S3" && letra == 'a'){
			estado = "S1";
		}
		else if(estado == "S4" && letra == 'd'){
			estado = "S3";
		}
		else{
			cout << letra << " no puede avanzar desde: " << estado << endl;	
			cout << "La secuencia se queda en: " << estado;
			return 0;
		}
		cout << letra << " avanzo de " << anterior << " a: " << estado << endl;
	}
	cout << "Estado final: " << estado << endl;
	return 0;
}
