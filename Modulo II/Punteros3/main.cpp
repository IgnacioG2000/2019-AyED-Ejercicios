#include <iostream>

using namespace std;

int buscarMaximo(int v[], int tam)
{
    int *maximo=v;

    for(int i=0; i<tam; i++)
    {
        if(*(maximo+i)>*(maximo))
            *maximo=*(maximo+i);
    }

    return *maximo;
}

int main()
{
    int *vec,tam;

    cout<<"Ingresar el tam del vector: ";
    cin>>tam;

    vec=new int [tam];

    cout<<"Ingresar "<<tam<<" elementos: "<<endl;
    for(int i=0; i<tam; i++)
        cin>>vec[i];

    cout<<"El numero mayor del conjunto es: "<<buscarMaximo(vec,tam)<<endl;
    return 0;
}
