#include <iostream>
#include <vector> 
#include <string> 
#include <ctime> 
#include <cctype>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int opc;
    string nickname;
    string palabras1[]={"perro", "gato", "casa" };
    string palabras2[]={"conector", "compilador", "ventanal" };
    string palabras3[]={"legumbres", "calibrador", "analizador"};
    cout << "Ingresa un nickname: ";
    cin >> nickname;
   do{
    cout << "Bienvenidos al juego del ahorcado "<< nickname << " selecciona la dificultad, si necesitas ayuda para comprender el juego aqui te va una pequeña ayuda de que va la cosa" << endl;
        cout << "EL juego funciona de la siguiente manera, tendras un repertorio de palabras, esa palabra se seleccionara de manera aleatoria, tu labor es ingresar letras, y adivinar la palabra, tendras 6 oportunidades, si las fallas se acaba el juego, se te ira avisando si acertaste o fallaste, suerte, y espero que disfrutes del juego."<< endl; 
        cout << "Continuando al juego...";
    cout << "\n\t 1.Facil \n\t 2.Medio \n\t 3. Dificil \n\t Presiona otro numero para salir" << endl; 
    cin >> opc; 
    switch (opc){
        case 1:
        cout << "Has seleccion la dificultad facil"<< endl;
        
        break; 
        case 2:
        cout << "Has seleccionado la dificultad media"<< endl;
        
        break;
        case 3:
        cout << "Has seleccionado la dificultad maxima"<< endl;
        
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