#include <iostream>

using namespace std;

struct nodo
{
    int info;
    nodo *siguiente;
};

void insertarLista(nodo *&lista, int dato)
{
    nodo *aux;

    if(lista==NULL)
    {
        lista=new nodo();
        lista->info=dato;
        lista->siguiente=NULL;
    }

    else
    {
        aux=lista;
        while(aux!=NULL && aux->siguiente!=NULL)
            aux=aux->siguiente;

        aux->siguiente= new nodo();
        aux=aux->siguiente;
        aux->info=dato;
        aux->siguiente=NULL;
    }
}

void mostrarLista(nodo *lista)
{
    if(lista==NULL)
        cout<<"LISTA VACIA"<<endl;
    else
    {
        while(lista!=NULL)
        {
            cout<<lista->info<<"->";
            lista=lista->siguiente;
        }
    }
}

int BuscarMax(nodo *lista)
{
    int mayor=-99999999999;

    while(lista!=NULL)
    {
        if(lista->info>mayor)
            mayor=lista->info;

        lista=lista->siguiente;
    }

    return mayor;
}

float calcularPromedio(nodo *lista)
{
    float suma=0,promedio=0;
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

void buscarElemento(nodo *lista,int n)
{
    bool encontrado=false;

    while(lista!=NULL && encontrado==false)
    {
        if(lista->info==n)
            encontrado=true;

        lista=lista->siguiente;
    }

    if(encontrado==true)
        cout<<"El numero "<<n<<" HA sido encontrado en la lista."<<endl;

    else
        cout<<"El numero "<<n<<" NO HA sido encontrado en la lista."<<endl;
}

void eliminarElemento(nodo *&lista, int n)
{
    nodo*aux=lista;
    nodo *anterior=NULL;

    while(aux!=NULL && aux->info!=n)
    {
        anterior=aux;
        aux=aux->siguiente;
    }

    if(aux==NULL)
        cout<<"El numero NO HA sido encontrado en la lista."<<endl;

    else
    {
        if(anterior==NULL)
        {
            lista=lista->siguiente;
            delete aux;
        }

        else
        {
            anterior->siguiente=aux->siguiente;
            delete aux;
        }
    }
}

void eliminarLista(nodo *&lista)
{
    nodo *aux;

    while(lista!=NULL)
    {
        aux=lista;
        if(aux->siguiente!=NULL)
        {
            lista=lista->siguiente;
            delete aux;
        }
        else
        {
            delete lista;
            lista=NULL;
        }
    }

    cout<<"Lista eliminada correctamente"<<endl;
}

int main()
{
    nodo *lista=NULL,*aux;
    int n,numeroABuscar,numeroAEliminar;
    char respuesta;

    do
    {
        cout<<"Ingresar un numero para insertarlo en la lista: ";
        cin>>n;

        insertarLista(lista,n);

        cout<<"Desea ingresar mas elementos a la lista? (s/n): ";
        cin>>respuesta;

        cout<<endl;

    }while(respuesta=='S' || respuesta=='s');

    cout<<"Mostramos la lista"<<endl;
    mostrarLista(lista);
    cout<<endl;

    cout<<"El mayor elemento de la lista es: "<<BuscarMax(lista)<<endl;
    cout<<"El promedio de la lista es: "<<calcularPromedio(lista)<<endl;

    cout<<endl;

    cout<<"Desea buscar un elemento de la lista? (s/n) ";
    cin>>respuesta;

    while(respuesta=='s' || respuesta=='S')
    {
        cout<<"Ingresar el numero a buscar: ";
        cin>>numeroABuscar;

        buscarElemento(lista,numeroABuscar);

        cout<<endl;

        cout<<"Desea buscar un elemento de la lista? (s/n): ";
        cin>>respuesta;
    }

    cout<<endl;

    cout<<"Desea eliminar algun nodo? (S=si o N=no): ";
    cin>>respuesta;

    while(respuesta=='s' || respuesta=='S')
    {
        cout<<"Ingresar el numero a eliminar: ";
        cin>>numeroAEliminar;

        eliminarElemento(lista,numeroAEliminar);

        cout<<endl;

        cout<<"Mostramos la lista: "<<endl;
        mostrarLista(lista);

        cout<<endl;

        cout<<"Desea eliminar algun nodo? (S=si o N=no): ";
        cin>>respuesta;
    }

    cout<<endl;

    cout<<"Desea eliminar la lista? (s/n): ";
    cin>>respuesta;

    if(respuesta=='s' || respuesta=='S')
        eliminarLista(lista);

    cout<<"Mostramos la lista: "<<endl;
    mostrarLista(lista);


    return 0;
}
