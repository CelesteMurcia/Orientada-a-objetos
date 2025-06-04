#include <iostream>
#include <string>

// Nombre: Celeste Itzayana Murcia Zuñiga
// Descripccion: Examen

using namespace std;

class LavadoraAutomatica {
private:
    enum Estado {
        APAGADA, INACTIVA, REMOJO, ENJUAGUE, DRENAJE, SECADO
    };
    
    enum Plan {
        REGULAR, DELICADO, SUPER_DELICADO
    };
    
    Estado estadoActual;
    Plan planActual;
    
    string obtenerNombrePlan(Plan plan) {
        switch (plan) {
            case REGULAR: return "Regular";
            case DELICADO: return "Delicado";
            case SUPER_DELICADO: return "Super Delicado";
            default: return "Desconocido";
        }
    }
    
    void simularEspera(int unidades) {
        cout << "Procesando";
        for (int i = 0; i < unidades; i++) {
            cout << ".";
            cout.flush();
            for (volatile long j = 0; j < 50000000; j++);
        }
        cout << " ¡Completado!" << endl;
    }
    
    void mostrarEstadoActual(const string& nombreEstado, const string& accion = "") {
        cout << "\nESTADO: " << nombreEstado << endl;
        if (!accion.empty()) {
            cout << "Accion: " << accion << endl;
        }
        cout << "Plan actual: " << obtenerNombrePlan(planActual) << endl;
        cout << "-----------------------------" << endl;
    }
    
public:
    LavadoraAutomatica() : estadoActual(APAGADA), planActual(REGULAR) {}
    
    void encender() {
        if (estadoActual == APAGADA) {
            estadoActual = INACTIVA;
            mostrarEstadoActual("ENCENDIDA", "Lavadora encendida");
            cout << "La lavadora esta lista para usar." << endl;
        } else {
            cout << "La lavadora ya esta encendida." << endl;
        }
    }
    
    void apagar() {
        if (estadoActual != APAGADA) {
            estadoActual = APAGADA;
            mostrarEstadoActual("APAGADA", "Lavadora apagada");
        } else {
            cout << "La lavadora ya esta apagada." << endl;
        }
    }
    
    void seleccionarPlan() {
        if (estadoActual == APAGADA) {
            cout << "Error: Encienda la lavadora primero." << endl;
            return;
        }
        
        cout << "\nSELECCION DE PLAN DE LAVADO" << endl;
        cout << "1. Regular" << endl;
        cout << "2. Delicado" << endl;
        cout << "3. Super Delicado" << endl;
        cout << "Seleccione el plan (1-3): ";
        
        int opcion;
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                planActual = REGULAR;
                break;
            case 2:
                planActual = DELICADO;
                break;
            case 3:
                planActual = SUPER_DELICADO;
                break;
            default:
                cout << "Opción invalida. Seleccionando plan Regular por defecto." << endl;
                planActual = REGULAR;
        }
        
        cout << "Plan seleccionado: " << obtenerNombrePlan(planActual) << endl;
    }
    
    void iniciarCicloDeLavado() {
        if (estadoActual != INACTIVA) {
            if (estadoActual == APAGADA) {
                cout << "Encienda la lavadora primero." << endl;
            } else {
                cout << "La lavadora esta ocupada en otro proceso." << endl;
            }
            return;
        }
        
        cout << "\n¡INICIANDO CICLO DE LAVADO!" << endl;
        cout << "Plan: " << obtenerNombrePlan(planActual) << endl;
        
        ejecutarFaseRemojo();
        
        ejecutarFaseEnjuague();
        
        ejecutarFaseDrenaje();
        
        ejecutarFaseSecado();
        
        estadoActual = INACTIVA;
        mostrarEstadoActual("CICLO COMPLETADO", "El ciclo de lavado ha terminado");
        cout << "¡La ropa está lista!" << endl;
    }
    
    string obtenerEstadoActual() {
        switch (estadoActual) {
            case APAGADA: return "Apagada";
            case INACTIVA: return "Inactiva";
            case REMOJO: return "Remojo";
            case ENJUAGUE: return "Enjuague";
            case DRENAJE: return "Drenaje";
            case SECADO: return "Secado";
            default: return "Estado Desconocido";
        }
    }
    
    void mostrarEstado() {
        cout << "\nESTADO DE LA LAVADORA" << endl;
        cout << "Estado: " << obtenerEstadoActual() << endl;
        cout << "Plan seleccionado: " << obtenerNombrePlan(planActual) << endl;
    }
    
private:
    void ejecutarFaseRemojo() {
        estadoActual = REMOJO;
        mostrarEstadoActual("REMOJO", "Llenando con agua y jabón");
        
        cout << "• Encendiendo luz de remojo" << endl;
        cout << "• Activando bomba de agua" << endl;
        
        int tiempoRemojo;
        switch (planActual) {
            case REGULAR:
                tiempoRemojo = 6; 
                cout << "Remojando por 30 minutos..." << endl;
                break;
            case DELICADO:
            case SUPER_DELICADO:
                tiempoRemojo = 2;
                cout << "Remojando por 5 minutos..." << endl;
                break;
        }
        
        simularEspera(tiempoRemojo);
    }
    
    void ejecutarFaseEnjuague() {
        estadoActual = ENJUAGUE;
        mostrarEstadoActual("ENJUAGUE", "Enjuagando la ropa");
        
        cout << "Encendiendo luz de enjuague" << endl;
        cout << "Activando agitador" << endl;
        cout << "Enjuagando por 30 minutos..." << endl;
        
        simularEspera(6);
    }
    
    void ejecutarFaseDrenaje() {
        estadoActual = DRENAJE;
        mostrarEstadoActual("DRENAJE", "Drenando el agua");
        
        cout << "Encendiendo luz de drenaje" << endl;
        cout << "Activando bomba de drenaje" << endl;
        
        int tiempoDrenaje;
        switch (planActual) {
            case SUPER_DELICADO:
                tiempoDrenaje = 2;
                cout << "Drenando por 5 minutos..." << endl;
                break;
            default:
                tiempoDrenaje = 3;
                cout << "Drenando por 10 minutos..." << endl;
                break;
        }
        
        simularEspera(tiempoDrenaje);
    }
    
    void ejecutarFaseSecado() {
        estadoActual = SECADO;
        mostrarEstadoActual("SECADO", "Secando la ropa");
        
        cout << "Encendiendo luz de secado" << endl;
        cout << "Activando centrifugado" << endl;
        cout << "Secando por 20 minutos..." << endl;
        
        simularEspera(4);
    }
};

void mostrarMenu() {
    cout << "\nSELECCIONA" << endl;
    cout << "1. Encender lavadora" << endl;
    cout << "2. Seleccionar plan de lavado" << endl;
    cout << "3. Iniciar ciclo de lavado" << endl;
    cout << "4. Ver estado actual" << endl;
    cout << "5. Apagar lavadora" << endl;
    cout << "6. Salir del programa" << endl;
    cout << "Seleccione una opcion (1-6): ";
}

int main() {
    LavadoraAutomatica lavadora;
    int opcion;
    
    cout << " SIMULADOR DE LAVADORA AUTOMÁTICA" << endl;
    
    while (true) {
        mostrarMenu();
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                lavadora.encender();
                break;
            case 2:
                lavadora.seleccionarPlan();
                break;
            case 3:
                lavadora.iniciarCicloDeLavado();
                break;
            case 4:
                lavadora.mostrarEstado();
                break;
            case 5:
                lavadora.apagar();
                break;
            case 6:
                cout << "¡Gracias por usar el simulador de lavadora!" << endl;
                return 0;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                break;
        }
        
        cout << "\nPresione Enter para continuar...";
        cin.ignore();
        cin.get();
    }
    
    return 0;
}
