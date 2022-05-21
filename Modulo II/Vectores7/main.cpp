#include <iostream>

using namespace std;

void inicializarTabla(char tabla[][4][50])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            strcpy(tabla[i][j],"");
        }
    }
    return;
}

void leerDatos(char tabla[][4][50], int fila)
{
    cout<<"Ingresar nombre y apellidos: ";
    fflush(stdin);
    gets(tabla[fila][0]);

    cout<<"Ingresar direccion: ";
    fflush(stdin);
    gets(tabla[fila][1]);

    cout<<"Ingresar telefono: ";
    cin>>tabla[fila][2];

    cout<<"Ingresar codigo postal: ";
    cin>>tabla[fila][3];

    return;
}

void mostrarTabla(char tabla[][4][50], int cantFilas)
{
    cout<<"Apellido y nombre   |   Direccion     |   Telefono    |  Codigo Postal  "<<endl;

    for(int i=0; i<cantFilas; i++)
    {
        cout<<tabla[i][0]<<"   |    "<<tabla[i][1]<<"    |     ";
        cout<<tabla[i][2]<<"   |    "<<tabla[i][3]<<endl;
    }
}

int main()
{
    char tabla[5][4][50];

    inicializarTabla(tabla);
    leerDatos(tabla,0);
    leerDatos(tabla,1);
    leerDatos(tabla,2);
    leerDatos(tabla,3);
    leerDatos(tabla,4);
    mostrarTabla(tabla,5);
    return 0;
}
