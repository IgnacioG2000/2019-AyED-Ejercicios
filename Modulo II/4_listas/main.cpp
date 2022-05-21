#include <iostream>

using namespace std;

struct nodo
{
    int info;
    nodo *siguiente;
};

void burbujeo(nodo *&lista)
{
    int auxBurbujeo;
    int tamLista=0;
    nodo *aux=lista;

    while(aux!=NULL)
    {
        tamLista++;
        aux=aux->siguiente;
    }
    aux=lista;

    for(int i=0; i<tamLista-1; i++)
    {
        aux=lista;
        for(int j=0; j<tamLista-1-i; j++)
        {
            while(aux!=NULL && aux->siguiente!=NULL)
            {
                if(aux->siguiente->info<aux->info)
                {
                    auxBurbujeo=aux->info;
                    aux->info=aux->siguiente->info;
                    aux->siguiente->info=auxBurbujeo;
                }

                    aux=aux->siguiente;
            }
        }
    }
}

void insertarLista(nodo *&lista, int n)
{
    nodo *aux=lista;

    if(lista==NULL)
    {
        lista= new nodo();
        lista->info=n;
        lista->siguiente=NULL;
    }

    else
    {
        while(aux!=NULL && aux->siguiente!=NULL)
            aux=aux->siguiente;

        aux->siguiente= new nodo();
        aux=aux->siguiente;
        aux->info=n;
        aux->siguiente=NULL;
    }
}

void mostrarLista(nodo *lista)
{
    while(lista!=NULL)
    {
        cout<<lista->info<<"->";
        lista=lista->siguiente;
    }
}

int main()
{
    nodo *lista=NULL;
    int n;
    char respuesta;

    do
    {
        cout<<"Ingresar un numero para insertarlo en la lista: ";
        cin>>n;

        insertarLista(lista,n);

        cout<<"Desea ingresar otro elemento? (s/n) ";
        cin>>respuesta;

        cout<<endl;

    }while(respuesta=='S' || respuesta=='s');

    cout<<"Mostramos la lista: "<<endl;
    mostrarLista(lista);

    cout<<endl<<endl;

    burbujeo(lista);
    cout<<"Mostramos la lista ORDENADA: "<<endl;
    mostrarLista(lista);


    return 0;
}
