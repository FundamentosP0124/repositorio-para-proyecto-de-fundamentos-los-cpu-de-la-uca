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