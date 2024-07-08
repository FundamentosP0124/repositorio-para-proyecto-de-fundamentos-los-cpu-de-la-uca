#include <ideamen.hpp>

//cambio del nombre de la funcion 
string palabralvlfacil() {
    string letra[10] = {"mano", "casa", "flor", "azul", "lobo", "cama", "luna", "relo", "vela", "cima"};
    int a;
    time_t t;
    t = time(NULL); //desde (int a;) hasta (a = rand), se encargan de selecionar un numero aleatorio del 1 al 1o
    srand(t);
    a = rand() % 10; 

    string y = letra[a];  //con el numero selecionado se remplaza el valor de (y) y sale

    return y;
} //Seleccion aleatoria de palabras 

string palabram() {
    string letra[10] = {"llama", "perro", "carro", "mente", "nieve", "cielo", "mundo", "libro", "marea", "estar"};
    int a;
    time_t t;
    t = time(NULL);
    srand(t);
    a = rand() % 10; 

    string y = letra[a];

    return y;
}

