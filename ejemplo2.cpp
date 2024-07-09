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
bool adivinarLetra(char letra, std::string& palabra, std::vector<char>& letrasAdivinadas);
void jugar();

int main() {
    jugar();
    return 0;
}

// Función para dibujar el estado del ahorcado basado en el número de intentos
void dibujarAhorcado(int intentos) {
    std::cout << "Ahorcado: ";
    for (int i = 0; i < intentos; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

// Función para verificar si una letra está en la palabra y actualizar las letras adivinadas
bool adivinarLetra(char letra, std::string& palabra, std::vector<char>& letrasAdivinadas) {
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
    std::string palabra;
    std::cout << "Ingrese la palabra a adivinar: ";
    std::cin >> palabra;

    // Inicializar la palabra adivinada con guiones bajos
    std::string palabraAdivinada = std::string(palabra.size(), '_');
    std::vector<char> letrasAdivinadas;

    int intentos = 0;
    while (intentos < MAX_INTENTOS) {
        std::cout << "Palabra a adivinar: " << palabraAdivinada << std::endl;
        std::cout << "Intentos restantes: " << MAX_INTENTOS - intentos << std::endl;
        std::cout << "Ingrese una letra: ";
        char letra;
        std::cin >> letra;
        letra = tolower(letra); // Convertir a minúscula

        // Verificar si la letra ya fue ingresada anteriormente
        if (std::find(letrasAdivinadas.begin(), letrasAdivinadas.end(), letra) != letrasAdivinadas.end()) {
            std::cout << "Letra ya ingresada anteriormente. Intente con otra." << std::endl;
            continue;
        }

        // Verificar si la letra está en la palabra
        if (adivinarLetra(letra, palabra, letrasAdivinadas)) {
            std::cout << "¡Letra encontrada!" << std::endl;
            for (int i = 0; i < palabra.size(); i++) {
                if (palabra[i] == letra) {
                    palabraAdivinada[i] = letra;
                }
            }
        } else {
            std::cout << "Letra no encontrada." << std::endl;
            intentos++;
            dibujarAhorcado(intentos);
        }

        // Verificar si la palabra ha sido completamente adivinada
        if (palabraAdivinada == palabra) {
            std::cout << "¡Felicidades! Has ganado." << std::endl;
            return;
        }
    }

    // Mensaje de derrota
    std::cout << "¡Lo siento! Has perdido. La palabra era: " << palabra << std::endl;
}