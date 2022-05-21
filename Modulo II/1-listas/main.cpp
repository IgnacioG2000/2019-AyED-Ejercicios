#include <iostream>

using namespace std;

struct nodo
{
    int info;
    nodo *siguiente;
};

void insertarLista(nodo *&lista, int n)
{
    nodo *aux;
    if(lista==NULL)
    {
        lista=new nodo();
        lista->info=n;
        lista->siguiente=NULL;
    }
    else
    {
        aux=lista;
        while(aux!=NULL && aux->siguiente!=NULL)
            aux=aux->siguiente;

        aux->siguiente= new nodo();
        aux=aux->siguiente;
        aux->info=n;
        aux->siguiente=NULL;
    }

    cout<<"Elemento "<<n<<" ingresado a la lista."<<endl;
}

void mostrarLista(nodo *lista)
{
    nodo *aux=lista;

    while(aux!=NULL)
    {
        cout<<aux->info<<"->";

        aux=aux->siguiente;
    }

    cout<<endl;
}

int maximo(nodo *lista)
{
    int mayor=-99999999;

    while(lista!=NULL)
    {
        if(lista->info>mayor)
            mayor=lista->info;

        lista=lista->siguiente;
    }
    return mayor;
}

float promedio(nodo *lista)
{
    float promedio=0,suma=0;
    int i=0;

    while(lista!=NULL)
    {
        suma+=lista->info;
        i++;
        lista=lista->siguiente;
    }

    promedio=suma/i;

    return promedio;

}

void encontrarElemento(nodo *lista, int n)
{
    bool encontrado=false;

    while(lista!=NULL && encontrado==false)
    {
        if(lista->info==n)
            encontrado=true;

        lista=lista->siguiente;
    }

    if(encontrado==true)
        cout<<"El elemento "<<n<<" HA sido encontrado en la lista"<<endl;

    else
        cout<<"El elemento "<<n<<" NO ha sido encontrado en la lista"<<endl;
}

void BorrarElemento(nodo *&lista, int n)
{
    nodo *aux=lista;
    nodo *anterior=NULL;

    while(aux!=NULL && aux->info!=n)
    {
        anterior=aux;
        aux=aux->siguiente;
    }

    if(aux==NULL)
        cout<<"El elemento no se encuentra en la lista"<<endl;

    else
    {
        if(anterior==NULL)
        {
            lista=lista->siguiente;
            delete aux;
        }

        else
        {
            anterior->siguiente= aux->siguiente;
            delete aux;
        }
    }
}

int main()
{
    nodo *lista=NULL;
    int numero,numeroABorrar,numeroABuscar;
    char respuesta;

    do
    {
        cout<<"Ingresar un elemento para insertarlo en la lista: ";
        cin>>numero;

        insertarLista(lista,numero);
        cout<<endl;

        cout<<"Desea ingresar algun elemento mas? (s/n) ";
        cin>>respuesta;

        cout<<endl;

    }while(respuesta=='S' || respuesta=='s');


    cout<<"Mostramos la lista"<<endl;
    mostrarLista(lista);

    cout<<"El mayor elemento de la lista es: "<<maximo(lista)<<endl;
    cout<<"El promedio de la lista es: "<<promedio(lista)<<endl;

    cout<<endl;

    cout<<"Desea borrar algun elemento? (s/n) ";
    cin>>respuesta;

    while(respuesta=='S' || respuesta=='s')
    {
        cout<<"Ingresar el numero que desea eliminar ";
        cin>>numeroABorrar;

        BorrarElemento(lista,numeroABorrar);

        cout<<"Mostramos la lista con el numero eliminado: "<<endl;

        mostrarLista(lista);

        cout<<endl;

        cout<<"Desea borrar algun elemento? (s/n) ";
        cin>>respuesta;

    }

    cout<<endl;

    cout<<"Desea buscar algun elemento? (S/N) ";
    cin>>respuesta;

    while(respuesta=='S' || respuesta=='s')
    {
        cout<<"Ingresar el numero que desea buscar ";
        cin>>numeroABuscar;

        encontrarElemento(lista,numeroABuscar);

        cout<<"Desea buscar algun elemento? (S/N) ";
        cin>>respuesta;
    }

    return 0;
}
