#include <iostream>
#include <string>

// Nombre: Celese Izayana Murcia Zuñiga
// Descripccion: Lanza en la pantalla el resultado de los animales vertebrados e invertabrados, igual a base de clases dentro del codigo

using namespace std;

class Animal{
	public:
		string color, animal, alimento;
		
		void Imprimir(){
			cout << "El animal es: " << animal << endl;
			cout << "El color del " << animal << " es: " << color << endl;
			cout << "El alimento del " << animal << " es: " << alimento << endl;
		}
};

class Vertebrado : public Animal{
	public:
		void huesos(){
		    cout << "El " << animal << " es vertebrado (tiene huesos)." << endl << endl;
		}
};

class Invertebrado : public Animal{
	public:
		void huesos(){
			cout << "El " << animal << " es invertebrado (no tiene huesos)." << endl << endl;
		}
};

main(){
	Vertebrado perro, caballo, oso;
	Invertebrado caracol, pulpo, lombriz;
	
	perro.animal = "Perro", perro.color = "Negro", perro.alimento = "Omnivoro Carnivoro";
	perro.Imprimir();
	perro.huesos();
	
	caballo.animal = "caballo", caballo.color = "Blanco", caballo.alimento = "Omnivoro";
	caballo.Imprimir();
	caballo.huesos();
	
	oso.animal = "oso polar", oso.color = "Blanco", oso.alimento = "Carnivoro";
	oso.Imprimir();
	oso.huesos();
	
	caracol.animal = "caracol", caracol.color = "Cafe y gris", caracol.alimento = "Herviboros";
	caracol.Imprimir();
	caracol.huesos();
	
	pulpo.animal = "pulpo", pulpo.color = "Morado", pulpo.alimento = "Carnivoro Herviboro";
	pulpo.Imprimir();
	pulpo.huesos();
	
	lombriz.animal = "lombriz", lombriz.color = "Rosa", lombriz.alimento = "Omnivoro";
	lombriz.Imprimir();
	lombriz.huesos();
	
	return 0;
}


