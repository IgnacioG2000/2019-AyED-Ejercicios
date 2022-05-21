#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo
{
    int info;
    Nodo *siguiente;
};

void BorrarLista(Nodo *&lista)
{
    Nodo *aux;
    while(lista != NULL)
    {
        aux=lista;

        if(aux->siguiente != NULL)
        {
            lista= lista->siguiente;
            delete aux;
        }
        else
        {
            delete lista;
            lista= NULL;
        }
    }

    cout<<"Lista eliminada"<<endl;
}

void mostrarElementosLista(Nodo *&lista)
{
    while(lista != NULL)
    {
        cout<<lista->info<<"->";
        lista= lista->siguiente;

    }
    cout<<endl;
}

int main()
{
    Nodo *inicio=NULL;
    inicio= new Nodo();
    inicio->info= 5;
    inicio->siguiente=NULL;
    inicio->siguiente= new Nodo();
    inicio->siguiente->info= 27;
    inicio->siguiente->siguiente= NULL;

    Nodo *paux;
    paux=inicio->siguiente;
    paux->siguiente= new Nodo();
    paux->siguiente->info = 32;
    paux->siguiente->siguiente= NULL;

    mostrarElementosLista(inicio);

    BorrarLista(inicio);

    return 0;
}
