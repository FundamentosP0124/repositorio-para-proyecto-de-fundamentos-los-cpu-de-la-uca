#include <ideamen.hpp>

string palabraf() {
    string letra[10] = {"mano", "casa", "flor", "azul", "lobo", "cama", "luna", "relo", "vela", "cima"};
    int a;
    time_t t;
    t = time(NULL);
    srand(t);
    a = rand() % 10; 

    string y = letra[a];

    return y;
} //Seleccion aleatoria de palabras