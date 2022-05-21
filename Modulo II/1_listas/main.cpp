#include <iostream>

using namespace std;

struct nodo
{
    int info;
    nodo *siguiente;
};

void insertarLista(nodo *&lista, int n)
{
    if(lista==NULL)
    {
        lista=new nodo();
        lista->info=n;
        lista->siguiente=NULL;
    }

    else
    {
        nodo *aux=lista;

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

int MayorElemento(nodo *lista)
{
    int maximo=-9999999999;

    while(lista!=NULL)
    {
        if(lista->info>maximo)
            maximo=lista->info;

        lista=lista->siguiente;
    }

    return maximo;
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

void buscarElemento(nodo *lista, int n)
{
    bool encontrado=false;

    while(lista!=NULL && encontrado==false)
    {
        if(lista->info==n)
            encontrado=true;

        lista=lista->siguiente;
    }

    if(encontrado==true)
        cout<<"El elemento "<<n<<" ha sido encontrado en la lista."<<endl;

    if(encontrado==false)
        cout<<"El elemento "<<n<<" NO ha sido encontrado en la lista."<<endl;
}

int main()
{
    nodo *lista=NULL;
    int numero,numeroABuscar;
    char respuesta;

    do
    {
        cout<<"Ingresar un elemento para insertarlo en la lista: ";
        cin>>numero;

        insertarLista(lista,numero);

        cout<<"Desea ingresar algun numero mas? (S=si o N=no) ";
        cin>>respuesta;

        cout<<endl;

    }while(respuesta=='S' || respuesta =='s');


    cout<<"Mostramos la lista: "<<endl;
    mostrarLista(lista);

    cout<<endl;

    cout<<"El mayor elemento de la lista es: "<<MayorElemento(lista)<<endl;
    cout<<"El promedio de la lista es: "<<promedio(lista)<<endl;

    cout<<endl;

    cout<<"Desea buscar algun elemento en la lista? (S=si o N=no) ";
    cin>>respuesta;

    while(respuesta=='S' || respuesta=='s')
    {
        cout<<"Ingresar el numero a buscar: ";
        cin>>numeroABuscar;

        buscarElemento(lista,numeroABuscar);

        cout<<endl;

        cout<<"Desea buscar algun elemento en la lista? (S=si o N=no) ";
        cin>>respuesta;
    }

    return 0;
}
