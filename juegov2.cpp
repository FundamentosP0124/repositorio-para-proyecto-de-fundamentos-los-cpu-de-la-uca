#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cctype>
#include <algorithm>
#include <cstdlib>

using namespace std;

// Función para seleccionar la palabra para el nivel fácil
string palabralvlfacil() {
    string letra[10] = {"mano", "casa", "flor", "azul", "lobo", "cama", "luna", "relo", "vela", "cima"};
    srand(time(NULL));
    int a = rand() % 10;
    return letra[a];
}

// Función para seleccionar la palabra para el nivel medio
string palabralvlmedio() {
    string letra[10] = {"llama", "perro", "carro", "mente", "nieve", "cielo", "mundo", "libro", "marea", "estar"};
    srand(time(NULL));
    int a = rand() % 10;
    return letra[a];
}

// Función para seleccionar la palabra para el nivel difícil
string palabralvldificil() {
    string letra[10] = {"helicoptero", "estructura", "evaluacion", "conclucion", "desarrollo", "determinar", "naturaleza", "aprovechar", "establecer"};
    srand(time(NULL));
    int a = rand() % 10;
    return letra[a];
}

// Función para seleccionar la palabra para el nivel ultra difícil
string palabralvlultra() {
    string letra[10] = {"responsabilidad", "particularmente", "establecimiento", "correspondiente", "arrepentimiento", "entretenimiento", "experimentacion", "sistematizacion", "fortalecimiento", "definitivamente"};
    srand(time(NULL));
    int a = rand() % 10;
    return letra[a];
}

const int MAX_INTENTOS = 6;

void dibujarAhorcado(int intentos) {
    cout << "Ahorcado: ";
    for (int i = 0; i < intentos; i++) {
        cout << "*";
    }
    cout << endl;
}

bool adivinarLetra(char letra, const string& palabra, vector<char>& letrasAdivinadas) {
    bool encontrada = false;
    for (char c : palabra) {
        if (c == letra) {
            encontrada = true;
            letrasAdivinadas.push_back(letra);
        }
    }
    return encontrada;
}

void jugar(const string& palabra) {
    string palabraAdivinada(palabra.size(), '_');
    vector<char> letrasAdivinadas;
    int intentos = 0;
    
    while (intentos < MAX_INTENTOS) {
        cout << "Palabra a adivinar: " << palabraAdivinada << endl;
        cout << "Intentos restantes: " << MAX_INTENTOS - intentos << endl;
        cout << "Ingrese una letra: ";
        char letra;
        cin >> letra;
        letra = tolower(letra);

        if (find(letrasAdivinadas.begin(), letrasAdivinadas.end(), letra) != letrasAdivinadas.end()) {
            cout << "Letra ya ingresada anteriormente. Intente con otra." << endl;
            continue;
        }

        if (adivinarLetra(letra, palabra, letrasAdivinadas)) {
            cout << "¡Letra encontrada!" << endl;
            for (int i = 0; i < palabra.size(); i++) {
                if (palabra[i] == letra) {
                    palabraAdivinada[i] = letra;
                }
            }
        } else {
            cout << "Letra no encontrada." << endl;
            intentos++;
            dibujarAhorcado(intentos);
        }

        if (palabraAdivinada == palabra) {
            cout << "¡Felicidades! Has ganado. La palabra era " << palabra << endl;
            return;
        }
    }

    cout << "¡Lo siento! Has perdido. La palabra era: " << palabra << endl;
}

int main() {
    int opc;
    string nickname;
    cout << "Ingresa un nickname: ";
    cin >> nickname;
    
    do {
        cout << "\nBienvenidos al juego del ahorcado " << nickname << ". Selecciona la dificultad. Si necesitas ayuda para comprender el juego, aquí te va una pequeña ayuda de qué va la cosa" << endl;
        cout << "El juego funciona de la siguiente manera: tendrás un repertorio de palabras, esa palabra se seleccionara de manera aleatoria. Tu labor es ingresar letras y adivinar la palabra. Inicia ingresando letras, tendras 6 oportunidades para advinarl la palabra. Si las fallas las 6 oportunidades, se acaba el juego. Se te ira avisando si acertaste o fallaste, para que al final revelar la palabra. Suerte y espero que disfrutes del juego "<< nickname << endl; 
        cout << "Continuando al juego..." << endl;
        cout << "\n\t1. Facil \n\t2. Medio \n\t3. Dificil \n\t4. Hardcore \n\t 5. Echa un ojo a los creditos de este juego, gracias por jugar. \n\t 6. Si necesitas ayuda presiona el 6.  \n\tPresiona otro numero para salir" << endl; 
        cin >> opc; 
        
        string palabra;
        switch (opc) {
            case 1:
                cout << "Has seleccionado la dificultad facil" << endl;
                palabra = palabralvlfacil();
                jugar(palabra);
                break; 
            case 2:
                cout << "Has seleccionado la dificultad media" << endl;
                palabra = palabralvlmedio();
                jugar(palabra);
                break;
            case 3:
                cout << "Has seleccionado la dificultad dificil" << endl;
                palabra = palabralvldificil();
                jugar(palabra);
                break;
            case 4:
                cout << "Has seleccionado la dificultad hardcore" << endl;
                palabra = palabralvlultra();
                jugar(palabra);
                break; 
            case 0:
                cout << "Has seleccionado la opción de salir" << endl;
                break;
            case 5:
            cout << "Los creadores de este juego han sido Cesar Chiquillo(00225424), Rodrigo Escobar(00093924) y Fabrizzio Arevalo(00100224)" << endl; 
            case 6:
            cout << "Si se te complica, empieza por usar vocales \n No te apresures, tomate tu tiempo, aqui no hay limite de tiempo, toma el que sea necesario. \n Ingresar varias letras en una misma opcion no te ayudara, solo perderas intentos. \n Las palabras no tienen caracteres especiales, asi que no es necesario ingresar dichos caracteres. \n Las palabras no contienen mayusculas, asi que no es necesario ingresarlas. "<< endl; 
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    } while (opc != 0);
    
    cout << "Espero que te haya gustado el juego, " << nickname << ". ¡Pasa feliz dia!" << endl;
    cout << "Jugador inscrito: " << nickname << endl; 
    return 0;
}
