#include <iostream>

using namespace std;

int buscarMaximo(int v[], int tam)
{
    int *maximo;
    maximo=v;

    for(int i=0; i<tam; i++)
    {
        if(*maximo<*(maximo+i))
            *maximo=*(maximo+i);
    }
    return *maximo;
}

int main()
{
    int tamanio,*p;

    cout<<"Ingresar el tam del vector: ";
    cin>>tamanio;

    cout<<endl;
    int *vec= new int[tamanio];

    cout<<"Ingrese "<<tamanio<< " valores: "<<endl;
    for(int i=0; i<tamanio; i++)
    {
        cin>>vec[i];
    }


    cout<<"El valor maximo es: "<<buscarMaximo(vec,tamanio)<<endl;

    delete [] vec;
    return 0;
}
