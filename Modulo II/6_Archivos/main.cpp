#include <iostream>
#include <stdio.h>
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
    if(f=fopen("E6","ab"))
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
    if(f=fopen("E6","rb"))
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
int main()
{
    alumno a1,a2,a3;

    guardarArchivo(a1);
    cout<<endl;
    guardarArchivo(a2);
    cout<<endl;
    guardarArchivo(a3);
    cout<<endl;
    MostrarArchivo(a1);
    cout<<endl;
    MostrarArchivo(a2);
    cout<<endl;
    MostrarArchivo(a3);
    cout<<endl;

    return 0;
}
