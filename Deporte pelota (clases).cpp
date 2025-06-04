#include <iostream>
#include <string>

// Nombre: Celeste Itzayana Murcia Zuñiga
// Descripccion: Al igual que el de los nimales, lanza el resultado en la pantalla pero de los deportes que se juegan con pelota.

using namespace std;

class Deporte{
	public:
		string lugar, deporte, duracion, puntaje;
		int jugadores;
		
		void info(){
			cout << "El tiempo del " << deporte << " es: " << duracion << endl;
			cout << "El puntaje es de: " << puntaje << endl;
			cout << "Cantidad de jugadores son: " << jugadores << endl;
			cout << "Lugar: " << lugar << endl;
		}
};

class Brazo :  public Deporte{
	public:
		void mano(){
			cout << deporte << " se juega con las manos." << endl;
		}
};

class Pierna : public Deporte{
	public:
		void pie(){
			cout << deporte << "se juega sin piernas" << endl;
		}
};

main(){
	
	Brazo voleibol;
	Pierna futbol;
	
	voleibol.deporte = "voleibol", voleibol.duracion = "3 a 5 sets (60 min a 150 min).", voleibol.puntaje = "25 puntos", voleibol.jugadores = 6, voleibol.lugar = "Campo de juego";
	voleibol.info();
	voleibol.mano();
	
	cout << endl;
	
	futbol.deporte = "Futbol", futbol.duracion = "90 minutos", futbol.puntaje = "un gol es igual a un punto", futbol.jugadores = 11, futbol.lugar = "Cancha";
	futbol.info();
	futbol.pie();
}















