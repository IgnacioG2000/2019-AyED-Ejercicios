#include <iostream>

using namespace std;

void OrdenAscendente(int v1[], int tam)
{
    int aux;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=0; j<tam-1-i; j++)
        {
            if(v1[j+1]<v1[j])
            {
                aux=v1[j];
                v1[j]=v1[j+1];
                v1[j+1]=aux;
            }
        }
    }
}

void OrdenDescendente(int v2[], int tam)
{
    int aux;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=0; j<tam-1-i; j++)
        {
            if(v2[j+1]>v2[j])
            {
                aux=v2[j];
                v2[j]=v2[j+1];
                v2[j+1]=aux;
            }
        }
    }
}

int main()
{
    int v[5];

    cout<<"Ingresar 5 elementos para el vector:"<<endl;

    for(int i=0; i<5; i++)
        cin>>v[i];

    cout<<endl;

    OrdenAscendente(v,5);
    cout<<"Ordenado ascendentemente:"<<endl;

    for(int j=0; j<5; j++)
        cout<<v[j]<<endl;

    cout<<endl;

    OrdenDescendente(v,5);

    cout<<"Ordenado descendentemente:"<<endl;
    for(int k=0; k<5; k++)
        cout<<v[k]<<endl;
    return 0;
}
