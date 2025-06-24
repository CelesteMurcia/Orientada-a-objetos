#include <iostream>
#include <fstream>
#include <string>

// Nombre: Celeste Itzayana Murcia ZUñiga
// Descripccion: EL programa lee el archivo laberinto y muestra el laberinto ya resuelto.

using namespace std;

void lectura();

int main(){
    lectura();
    
    system("pause");
    return 0;
}

void lectura(){
    ifstream archivo;
    string linea;
    int numeroLinea = 1;
    
    archivo.open("Laberinto.txt", ios::in); // Abrimos el archivo
    
    if(archivo.fail()){
        cout << "Error: No se pudo abrir el archivo 'Laberinto.txt'" << endl;
        cout << "Asegurate de que el archivo existe en el directorio del programa." << endl;
        exit(1);
    }
    
    cout << "LABERINTO 70x70" << endl;
    cout << "Leyenda: | = paredes, _ = caminos, * = solucion" << endl;
    cout << "Entrada: arriba izquierda | Salida: abajo derecha" << endl << endl;
    
    // Leer línea por línea hasta el final del archivo
    while(getline(archivo, linea)){
        cout << linea << endl;
        numeroLinea++;
    }
    
    archivo.close(); // Cerramos el archivo
    
    cout << "Laberinto cargado exitosamente!" << endl;
    cout << "Total de lineas leidas: " << (numeroLinea - 1) << endl;
}
