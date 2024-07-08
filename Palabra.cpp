#include <ideamen.hpp>

//Funcion para seleccionar la palabras para el nivel facil.
string palabralvlfacil() {
    string letra[10] = {"mano", "casa", "flor", "azul", "lobo", "cama", "luna", "relo", "vela", "cima"}; //arreglo de 10 palabras.

    int a; 
    time_t t;
    t = time(NULL); 
    srand(t);
    a = rand() % 10; //seleccion de palabra del 1 al 10 en donde se sustituira para sacar una palabra del arreglo. 

    string y = letra[a]; //seleccion de la posicion del string y que (y) tenga la palabra, asi retornandola.

    return y; //retorno de (y) el cual es la palabra seleccionada.
}

// Funcion para seleccionar la palabras para el nivel medio
string palabralvlmedio() {
    string letra[10] = {"llama", "perro", "carro", "mente", "nieve", "cielo", "mundo", "libro", "marea", "estar"};//arreglo de 10 palabras.

    int a;
    time_t t;
    t = time(NULL);
    srand(t);
    a = rand() % 10; //misma funcion de selecionar una palabra aleaotrioa del 1 al 10.

    string y = letra[a]; //igualar (y) a valor de la posicion del arreglo. 

    return y; //retornar palabra para lvl medio
}

