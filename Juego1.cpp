#include <ideamen.hpp>

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