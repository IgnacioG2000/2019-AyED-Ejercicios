#include <iostream>
#include <stdio.h>
#include<string.h>
using namespace std;

struct alumno
{
    char nombre[50];
    char apellido[50];
    char DNI[10];
    int legajo;
    int CodigoCarrera;

};

struct nodo
{
    alumno info;
    nodo *siguiente;
};

void CrearArchivo(alumno &x)
{
    FILE *f;

    if(f=fopen("nachito.txt","wb"))
    {
        cout<<"Ingresar nombres: ";
        cin>>x.nombre;

        cout<<"Ingresar apellidos: ";
        cin>>x.apellido;

        cout<<"Ingresar DNI: ";
        cin>>x.DNI;

        cout<<"Ingresar legajo: ";
        cin>>x.legajo;

        cout<<"Ingresar codigo de carrera: ";
        cin>>x.CodigoCarrera;

        fwrite(&x,sizeof(alumno),1,f);

        fclose(f);
    }
}

void ArchivoALista(nodo *&lista)
{
    FILE *f;
    alumno y;
    nodo *aux;

   if(f=fopen("nachito.txt","rb"))
   {
       while(fread(&y,sizeof(alumno),1,f))
       {
            if(lista==NULL)
            {
                lista= new nodo();
                lista->info=y;
                lista->siguiente=NULL;
            }

            else
            {
                aux=lista;
                while(aux!=NULL && aux->siguiente!=NULL)
                    aux=aux->siguiente;

                aux->siguiente= new nodo();
                aux=aux->siguiente;
                aux->info=y;
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
        CrearArchivo(x);
        ArchivoALista(lista);

        cout<<endl;

        cout<<"Desea agregar otro alumno? (S=si o N=no) ";
        cin>>respuesta;


    }while(respuesta=='S' || respuesta=='s');

    aux=lista;

    cout<<"Listamos los alumnos:"<<endl;
   while(aux!=NULL)
   {
        cout<<aux->info.nombre<<endl;
        cout<<aux->info.apellido<<endl;
        cout<<aux->info.DNI<<endl;
        cout<<aux->info.legajo<<endl;
        cout<<aux->info.CodigoCarrera<<endl;

       aux=aux->siguiente;
   }


    return 0;
}
