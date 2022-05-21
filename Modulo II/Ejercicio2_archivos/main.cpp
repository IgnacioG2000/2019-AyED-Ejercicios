#include <iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int guardarNumeros (char archivo[])
{
    FILE *f;
    int n;
    float numeros;

    cout<<"Cuantos numeros desea ingresar: ";
    cin>>n;

    cout<<"Ingresar "<<n<<" valores: "<<endl;

    //Escribimos los valores en el archivo
    for(int i=0; i<n; i++)
    {
        cin>>numeros;

        if(f=fopen(archivo,"ab"))
        {
            fwrite(&numeros,sizeof(float),1,f);


            fclose(f);
        }
        else
        {
            cout<<"Error al intentar leer el archivo"<<endl;
            return 1;
        }
    }
}

int ModificarDato(char archivo[])
{

}
int leerDatos (char archivo[])
{
    FILE *f;
    float numeros;

    if(f=fopen(archivo,"rb"))
        {
            cout<<"Leemos valores: "<<endl;

           while(fread(&numeros,sizeof(float),1,f))

           cout<<numeros<<endl;

           fclose(f);
        }
        else
            cout<<"Error al intentar leer el archivo"<<endl;
}

int main()
{
    char rutaYNombre[]="Ejercicio2";
    char opcion;

do
{
    cout<<"Elija una opcion: "<<endl;
    cout<<"1- Cargar datos"<<endl;
    cout<<"2- Modificar datos"<<endl;
    cout<<"3- Mostrar datos"<<endl;
    cout<<"esc-salir"<<endl;

    do
    opcion=getch();

        while(opcion!='1' && opcion!='2' && opcion!='3' && opcion!=27);

    switch(opcion)
    {
    case '1':
        guardarNumeros(rutaYNombre);
        break;



    case '3':
        leerDatos(rutaYNombre);
        break;

    }
}while(opcion!=27);
getch();
    return 0;
}
