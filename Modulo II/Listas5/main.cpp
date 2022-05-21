#include <iostream>
#include <stdio.h>
#define NOMBRE "Nacho"
using namespace std;

struct alumno
{
    char nombre[20];
    char apellido [20];
    int legajo;
    char DNI[10];
    int nacimiento;
};

struct nodo
{
    alumno info;
    nodo *siguiente;
};

void crearArchivo(alumno &x)
{
    FILE *f;

    if(f=fopen(NOMBRE,"wb"))
    {
        cout<<"Ingresar nombre: ";
        cin>>x.nombre;

        cout<<"Ingresar apellido: ";
        fflush(stdin);
        cin.getline(x.apellido,20);

        cout<<"Ingresar legajo: ";
        cin>>x.legajo;

        cout<<"Ingresar DNI: ";
        cin>>x.DNI;

        cout<<"Ingresar fecha de nacimiento en forma AAAAMMDD: ";
        cin>>x.nacimiento;

        fwrite(&x,sizeof(alumno),1,f);

        fclose(f);
        cout<<endl;
    }
    else
        cout<<"No se pudo abrir el archivo"<<endl;
}

void archivoALista(nodo *&lista)
{
    FILE *f;
    alumno x;
    nodo *aux;

    if(f=fopen(NOMBRE,"rb"))
    {
        while(fread(&x,sizeof(alumno),1,f))
        {

            if(lista==NULL)
            {
                lista=new nodo();
                lista->info=x;
                lista->siguiente=NULL;
            }
            else
            {
                aux=lista;
                while(aux!=NULL && aux->siguiente!=NULL)
                    aux=aux->siguiente;

                aux->siguiente=new nodo();
                aux=aux->siguiente;
                aux->info=x;
                aux->siguiente=NULL;
            }
        }
        fclose(f);
    }
}

int main()
{
    nodo *lista=NULL;
    nodo *aux;
    alumno x;
    char respuesta;

    do
    {
        crearArchivo(x);

        archivoALista(lista);

        cout<<"Desea agregar otro alumno a la lista? (S=si o N=no) ";
        cin>>respuesta;

    }while(respuesta=='s' || respuesta=='S');

    cout<<"Mostramos la lista"<<endl;
    aux=lista;

    while(aux!=NULL)
    {
        cout<<aux->info.nombre<<endl;
        cout<<aux->info.apellido<<endl;
        cout<<aux->info.legajo<<endl;
        cout<<aux->info.DNI<<endl;
        cout<<aux->info.nacimiento<<endl;

        aux=aux->siguiente;
    }
    return 0;
}
