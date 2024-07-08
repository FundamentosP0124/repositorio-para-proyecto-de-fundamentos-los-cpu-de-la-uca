#include <iostream>
#include <vector> 
#include <string> 
#include <ctime> 
#include <cctype>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;
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

int main(){
    int opc;
    string nickname;
    string palabras1;
    string palabras2;
    string palabras3;
    string palabras4;
    cout << "Ingresa un nickname: ";
    cin >> nickname;
   do{
    cout << "Bienvenidos al juego del ahorcado "<< nickname << " selecciona la dificultad, si necesitas ayuda para comprender el juego aqui te va una pequeña ayuda de que va la cosa" << endl;
        cout << "EL juego funciona de la siguiente manera, tendras un repertorio de palabras, esa palabra se seleccionara de manera aleatoria, tu labor es ingresar letras, y adivinar la palabra, tendras 6 oportunidades, si las fallas se acaba el juego, se te ira avisando si acertaste o fallaste, suerte, y espero que disfrutes del juego."<< endl; 
        cout << "Continuando al juego...";
    cout << "\n\t 1.Facil \n\t 2.Medio \n\t 3. Dificil \n\t  4. Hardcore \n\t Presiona otro numero para salir" << endl; 
    cin >> opc; 
    switch (opc){
        case 1:
        cout << "Has seleccion la dificultad facil"<< endl;
        palabras1 = palabralvlfacil();
        
        break; 
        case 2:
        cout << "Has seleccionado la dificultad media"<< endl;
        palabras2 = palabralvlmedio();
        
        break;
        case 3:
        cout << "Has seleccionado la dificultad maxima"<< endl;
        palabras3 = palabralvldificil();


        case 4:
        cout << "Has seleccionado la dificultad hardcore"<< endl;
        palabras4 = palabralvlultra();
        
        break; 
        case 0:
        cout << "Has seleccionado la opcion de salir"<<endl;
        break;
        default:
        cout << "Opcion no valida"<<endl;
        break;
    }
    
} while (opc !=0);
cout << "espero que te haya gustado el juego "<< nickname << " pasa feliz dia"; 
return 0; 
}