#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cctype>
#include <algorithm>



// Constantes
const int MAX_INTENTOS = 6;

// Declaración de funciones
void dibujarAhorcado(int intentos);
bool adivinarLetra(char letra, string& palabra, vector<char>& letrasAdivinadas);
void jugar();

int main() {
    jugar();
    return 0;
}

// Función para dibujar el estado del ahorcado basado en el número de intentos
void dibujarAhorcado(int intentos) {
    cout << "Ahorcado: ";
    for (int i = 0; i < intentos; i++) {
        cout << "*";
    }
    cout << endl;
}

// Función para verificar si una letra está en la palabra y actualizar las letras adivinadas
bool adivinarLetra(char letra, string& palabra, vector<char>& letrasAdivinadas) {
    bool encontrada = false;
    for (char& c : palabra) {
        if (c == letra) {
            encontrada = true;
            letrasAdivinadas.push_back(letra);
        }
    }
    return encontrada;
}

// Función principal del juego
void jugar() {
    string palabra;
    cout << "Ingrese la palabra a adivinar: ";
    cin >> palabra;

// Inicializar la palabra adivinada con guiones bajos
    string palabraAdivinada = string(palabra.size(), '_');
    vector<char> letrasAdivinadas;

    int intentos = 0;
    while (intentos < MAX_INTENTOS) {
        cout << "Palabra a adivinar: " << palabraAdivinada << endl;
        cout << "Intentos restantes: " << MAX_INTENTOS - intentos << endl;
        cout << "Ingrese una letra: ";
        char letra;
        cin >> letra;
        letra = tolower(letra); // Convertir a minúscula

// Verificar si la letra ya fue ingresada anteriormente
        if (find(letrasAdivinadas.begin(), letrasAdivinadas.end(), letra) != letrasAdivinadas.end()) {
            cout << "Letra ya ingresada anteriormente. Intente con otra." << endl;
            continue;
        }

// Verificar si la letra está en la palabra
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

        // Verificar si la palabra ha sido completamente adivinada
        if (palabraAdivinada == palabra) {
            cout << "¡Felicidades! Has ganado." << endl;
            return;
        }
    }

// Mensaje de derrota
    cout << "¡Lo siento! Has perdido. La palabra era: " << palabra << endl;
}
