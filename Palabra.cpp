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

// Funcion para seleccionar la palabras para el nivel medio.
string palabralvlmedio() {
    string letra[10] = {"llama", "perro", "carro", "mente", "nieve", "cielo", "mundo", "libro", "marea", "estar"};//arreglo de 10 palabras.

    int a;
    time_t t;
    t = time(NULL);
    srand(t);
    a = rand() % 10; //misma funcion de selecionar una palabra aleaotrioa del 1 al 10.

    string y = letra[a]; //igualar (y) a valor de la posicion del arreglo. 

    return y; //retornar palabra para lvl medio.
}

// Funcion de lvl dificil.
string palabralvldificil() {
    string letra[10] = {"helicoptero", "estructura", "evaluacion", "conclucion", "estructura", "desarrollo", "determinar", "naturaleza", "aprovechar", "establecer"};//arreglo de 10 palabras.

    int a; 
    time_t t;
    t = time(NULL);
    srand(t);
    a = rand() % 10; //seleccion de un valor entre 1 y 10.

    string y = letra[a]; //sustitucion de palabra.

    return y; // retorno de la palabra para empezar el lvl.
}

//funcion de seleccion de palabras para el lvl ultradificil.
string palabralvlultra() {
    string letra[10] = {"responsabilidad", "particularmente", "establecimiento", "correspondiente", "arrepentimiento", "entretenimiento", "experimentacion", "sistematizacion", "fortalecimiento", "definitivamente"};//arreglo de 10 palabras.

    int a;
    time_t t;
    t = time(NULL);
    srand(t);
    a = rand() % 10; //seleccion de manera aleatoria de un numero del 1 al 10.

    string y = letra[a]; //igualacion de letra (y) con la posicion solicitada en el arreglo.

    return y;//retorno de la palabra seleccionada.
}
