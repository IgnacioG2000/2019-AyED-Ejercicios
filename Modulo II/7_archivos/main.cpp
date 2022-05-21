#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

struct alumno
{
    char nombre [20];
    char apellido [30];
    char legajo [15];
    char DNI [10];
    int nacimiento;
};


bool guardarArchivo(alumno &x)
{
    FILE *f;
    if(f=fopen("hola.txt","ab"))
    {
        cout<<"Ingresar nombre: ";
        cin>>x.nombre;
        cout<<"Ingresar apellido: ";
        cin>>x.apellido;
        cout<<"Ingresar legajo: ";
        cin>>x.legajo;
        cout<<"Ingresar DNI: ";
        cin>>x.DNI;
        cout<<"Ingresar fecha de nacimiento (formato AAAAMMDD): ";
        cin>>x.nacimiento;

        fwrite(&x,sizeof(alumno),1,f);
        fclose(f);
        return true;
    }
    return false;
}

bool MostrarArchivo(alumno y)
{
    FILE *f;
    if(f=fopen("hola.txt","rb"))
    {
        while(fread(&y,sizeof(alumno),1,f))
        {
            cout<<"********Datos del alumno***********"<<endl;
            cout<<"Nombre: "<<y.nombre<<endl;
            cout<<"Apellido : "<<y.apellido<<endl;
            cout<<"Legajo: "<<y.legajo<<endl;
            cout<<"DNI: "<<y.DNI<<endl;
            cout<<"Fecha de nacimiento: "<<y.nacimiento<<endl;
            cout<<endl;
        }
        fclose(f);
        return true;
    }
    return false;
}

int BuscarLegajo(char legajo[])
{
    FILE *f;
    int Legajo=0;
    alumno p;
    if(f=fopen("hola.txt","rb"))
    {
        while(fread(&p,sizeof(alumno),1,f))
        {
            if(strcmp(legajo,p.legajo)==0)
            {
                Legajo=1;
                cout<<"********Datos del alumno***********"<<endl;
                cout<<"Nombre: "<<p.nombre<<endl;
                cout<<"Apellido : "<<p.apellido<<endl;
                cout<<"Legajo: "<<p.legajo<<endl;
                cout<<"DNI: "<<p.DNI<<endl;
                cout<<"Fecha de nacimiento: "<<p.nacimiento<<endl;
                cout<<endl;
            }
        }
        if(!Legajo)
            cout<<"No se encontro a la persona buscada"<<endl;
        fclose(f);
        return 1;
    }
    return 0;
}

int BuscarDNI(char DNI[])
{
    FILE *f;
    int DNIbuscado=0;
    alumno p;
    if(f=fopen("hola.txt","rb"))
    {
        while(fread(&p,sizeof(alumno),1,f))
        {
            if(strcmp(DNI,p.DNI)==0)
            {
                DNIbuscado=1;
                cout<<"********Datos del alumno***********"<<endl;
                cout<<"Nombre: "<<p.nombre<<endl;
                cout<<"Apellido : "<<p.apellido<<endl;
                cout<<"Legajo: "<<p.legajo<<endl;
                cout<<"DNI: "<<p.DNI<<endl;
                cout<<"Fecha de nacimiento: "<<p.nacimiento<<endl;
                cout<<endl;
            }
        }
        if(!DNIbuscado)
            cout<<"No se encontro a la persona buscada"<<endl;
        fclose(f);
        return 1;
    }
    return 0;
}
int main()
{
    char opcion;
    char legajoBuscado[15];
    char DNIBuscado[10];
    alumno p;

do
{
  cout<<"Seleccione una opcion"<<endl;
  cout<<"1-Agregar un alumno"<<endl;
  cout<<"2- Listar todos los alumnos"<<endl;
  cout<<"3- Buscar un alumno por legajo"<<endl;
  cout<<"4- Buscar un alumno por DNI"<<endl;
  cout<<"5- Ordenar archivo por legajo"<<endl;
  cout<<"Esc- Salir"<<endl;
  cout<<endl;

    opcion=getch();
    while(opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4' && opcion!='5' && opcion!=27);
    switch(opcion)
    {
        case '1':
            if(guardarArchivo(p))
                cout<<"El registro se guardo con exito"<<endl;
            else
                cout<<"Error al intentar abrir el archivo"<<endl;

                cout<<endl;

        break;

        case '2':
            if(!MostrarArchivo(p))
            cout<<"Error al intentar abrir el archivo"<<endl;

            cout<<endl;

        break;

        case '3':
            cout<<"Ingresar el legajo del alumno buscado: ";
            cin>>legajoBuscado;
            if(!BuscarLegajo(legajoBuscado))
                cout<<"Error al intentar abrir el archivo"<<endl;

            cout<<endl;

        break;

        case '4':
            cout<<"Ingresar el DNI del alumno buscado: ";
            cin>>DNIBuscado;
            if(!BuscarDNI(DNIBuscado))
                cout<<"Error al intentar leer el archivo"<<endl;

            cout<<endl;

        break;

    }
}while(opcion!=27);
    getch();

    return 0;
}
