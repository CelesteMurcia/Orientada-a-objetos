#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

// Nombre: Celeste Itzayana Murcia ZUñiga
// Descripccion: EL programa lee un archivo de texto, y muestra como resultado lo ingresado en el archivo de texto.

using namespace std;

void lectura();

int main(){
	lectura();
	
	system("pause");
	return 0;
}

void lectura(){
	ifstream archivo;
	string texto;
	
	archivo.open("Archivo.txt", ios::in); //Abrimos el archivo
	
	if(archivo.fail()){
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){
		getline(archivo, texto);
		cout << "El texto ingresado es: " << texto << endl;

	}
	
	archivo.close(); //Cerramos el archivo 
}
