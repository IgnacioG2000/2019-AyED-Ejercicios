#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<cstring>
using namespace std;

void InicializarTabla(char tabla [][4][50])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
            strcpy(tabla[i][j],"");
    }
    return;
}

void llenar_datos(char tabla[][4][50], int filas)
{
    strcpy(tabla[0][0], "Garcia Ignacio");
    strcpy(tabla[0][1], "utn1");
    strcpy(tabla[0][2], "19");
    strcpy(tabla[0][3], "20000");
    strcpy(tabla[1][0], "Bortolazzi Franco");
    strcpy(tabla[1][1], "utn2");
    strcpy(tabla[1][2], "19");
    strcpy(tabla[1][3], "40000");
    strcpy(tabla[2][0], "Berrojalviz Tomas");
    strcpy(tabla[2][1], "utn3");
    strcpy(tabla[2][2], "19");
    strcpy(tabla[2][3], "30000");

    return;
}

void mostrarTabla(char tabla[][4][50], int filas)
{
    cout<<"Apellido y nombre | Direccion | Edad | Saldos " <<endl<<endl;
    for(int i=0; i<filas; i++)
    {
        cout<<tabla[i][0]<< "    |    "<<tabla[i][1]<< "   |   "
        <<tabla[i][2]<< "    |    "<<tabla[i][3]<<endl;
    }
    return;
}

void OrdenarSaldos(char tabla[][4][50], int tam)
{
    char aux[100];

    for(int i=0; i<tam-1; i++)
    {
        for(int j=0; j<tam-1-i; j++)
        {
            if(atoi(tabla[j+1][3])<atoi(tabla[j][3]))
            {
                for(int columna=0; columna<4; columna++)
                {
                    strcpy(aux,tabla[j][columna]);
                    strcpy(tabla[j][columna],tabla[j+1][columna]);
                    strcpy(tabla[j+1][columna],aux);
                }
            }
        }
    }
    return;
}
int main()
{
    char clientes[50][4][50];
    InicializarTabla(clientes);
    llenar_datos(clientes,3);
    mostrarTabla(clientes,3);
    OrdenarSaldos(clientes,3);
    cout<<endl<<endl;
    mostrarTabla(clientes,3);

    return 0;
}
