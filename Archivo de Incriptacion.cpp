#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctime>
#include <cstdlib>

using namespace std;

/*Lo primero que voy a hacer es crear una función Llamar a convertir
y que va a guardar Todo En el puntero char s, Luego voy a utilizar un
bucle en este caso va a ser en Wilde Lo voy a aplicar cada vez que el
puntero sea distinto la expresión Y luego voy a pasar a definirlas IF
Y en las 6 me dice que por el puntero ese que sea mayor a y menor a pedir
aumentando de 10 en 10 Pero por el contrario para la p mayúscula y q mayúscula
va a ir disminuyendo en  de 16 en 16 Lo mismo con las minúsculas de a , p y las
minúsculas de q a z. Y solamente hay una única excepción para el espacio en blanco
Pues hay un único problema y es que voy a tener que utilizar el  lenguaje accii para
que después de leer el espacio me devuelve el mismo espacio Ya estando dentro de mí define
la variable texto que me va a estar leyendo 50 datos Luego voy a utilizar un cin getline
para poder leer todo el texto y me lea los espacios también Luego ya solamente llame la función
Para que me realice toda la transformación del texto y luego ya sólo la muestra */




void convertir (char *s){

    while(*s != '\0'){

        if(*s>='A' && *s<='P'){

            *s=*s+10;
            s+=1;

        } else if (*s>='Q' && *s<='Z'){

            *s=*s-16;
            s+=1;

        }else if (*s>='a' && *s<='P'){

            *s=*s+10;
            s+=1;

    }   else if (*s>='q' && *s  <='z'){

            *s=*s-16;
            s+=1;

    } else if (*s>=' '){

            *s=32;
            s+=1;
    }
    }
    }

int main()
{
    char texto[50];

    cout << " _____________________________________" << endl;
    cout << "  Bienvenido al menu de incriptacion" << endl;
    cout << " -------------------------------------" << endl;
    cout << " -------------------------------------" << endl;
    cout << " - Ingrese el codigo que desee incriptar: " << endl;
    cout << "  " << endl;
    cout << "  (OJO, INGRESE SOLO MAYUSCULAS...)" << endl;
    cin.getline(texto,50,'\n');

    convertir(texto);
    cout << "  " << endl;
    cout << "  " << endl;
    cout << "  " << endl;
    cout << " Su texto incriptado es: " << endl;cout <<texto<<endl;
    cout << "  " << endl;
    cout << "  " << endl;






    system ("pause");
    system ("cls");
    return main();









    return 0;
}
