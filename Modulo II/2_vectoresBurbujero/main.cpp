#include <iostream>
#include<cmath>

using namespace std;

void Ordenado(int v[], int tam)
{
    float aux;

    for(int i=0; i<tam; i++)
    {
       for(int j=0; j<tam; j++)
       {
           if(v[j+1]<v[j])
           {
               aux=v[j];
               v[j]=v[j+1];
               v[j+1]=aux;
           }
       }
    }
    return;
}

float promedio(int v[],int tam)
{
    int suma=0;

    for(int i=0; i<tam; i++)
    {
        suma+=v[i];
    }
    Promedio=suma/tam;
    return Promedio;
}

int masCercanoAlPromedio(int v[], int tam)
{
    float prom=promedio(v,tam);
    float distanciaMasCercano=abs(v[0]-prom);
    int masCercano=v[0];

    for(int i=0; i<tam; i++)
    {
        if(abs(v[i]-prom)<distanciaMasCercano)
        {
            distanciaMasCercano=abs(v[i]-prom);
            masCercano=v[i];
        }
    }
    return masCercano;
}

int main()
{
    int v[15];
    int mayor;
    int menor;

    for(int i=0; i<15; i++)
    {
        cout<<"v["<<i<<"]= ";
        cin>>v[i];
    }
    Ordenado(v,15);

    cout<<"El menor es: "<<v[0]<<endl;
    cout<<"El mayor es: "<<v[15]<<endl;
    cout<<endl;
    cout<<"El promedio es: "<<promedio(v,15)<<endl;
    cout<<"El valor mas cercano al promedio es: "<<masCercanoAlPromedio(v,15)<<endl;

    return 0;
}
