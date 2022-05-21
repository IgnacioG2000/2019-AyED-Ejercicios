#include <iostream>

using namespace std;

int main()
{
    string IDcontenedor,IDcontenedorMasPesado;
    int puerto,contenedor1=0,contenedor2=0,contenedor3=0;
    float pesoContenedor,pesoTotal=0,contenedorMasPesado=0;

    for(int i=1; i<=5; i++)
    {

        cout<<"Ingresar el identificador del contenedor "<<i<<": ";
        cin>>IDcontenedor;

        cout<<"Ingresar el peso del contenedor "<<i<<": ";
        cin>>pesoContenedor;

        cout<<"Ingresar el puerto de arribo del contenedor "<<i<<" (1,2 o 3): ";
        cin>>puerto;

        cout<<endl;

        //Punto 1
        pesoTotal+=pesoContenedor;

        //Punto 2
        if(pesoContenedor>contenedorMasPesado)
        {
            contenedorMasPesado=pesoContenedor;
            IDcontenedorMasPesado=IDcontenedor;
        }

        //Punto 3
        switch(puerto)
        {
        case 1:
            contenedor1++;
            break;

        case 2:
            contenedor2++;
            break;

        case 3:
            contenedor3++;
            break;
        }

    }
        cout<<"El peso total que traslada el buque es: "<<pesoTotal<<" kg"<<endl;
        cout<<"La cantidad de contenedores que se traslada al puerto 1 es: "<<contenedor1<<endl;
        cout<<"La cantidad de contenedores que se traslada al puerto 2 es: "<<contenedor2<<endl;
        cout<<"La cantidad de contenedores que se traslada al puerto 3 es: "<<contenedor3<<endl;
        cout<<"El ID del contenedor mas pesado es: "<<IDcontenedorMasPesado<<endl;

    return 0;
}
