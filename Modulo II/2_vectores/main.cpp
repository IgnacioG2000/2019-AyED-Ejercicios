#include <iostream>
#include<cmath>

using namespace std;

int mayor(int v[], int tam)
{
    int Mayor=v[0];

    for(int i=0; i<tam; i++)
    {
        if(v[i]>Mayor)
            Mayor=v[i];
    }
    return Mayor;
}

int menor(int v[], int tam)
{
    int Menor=v[0];

    for(int i=0; i<tam; i++)
    {
        if(v[i]<Menor)
            Menor=v[i];
    }
    return Menor;
}
float promedio(int v[],int tam)
{
    float suma=0,promedio=0;

    for(int i=0; i<tam; i++)
        suma+=v[i];

    promedio= suma/tam;

    return promedio;
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
    int v[10];

    for(int i=0; i<10; i++)
    {
        cout<<"v["<<i<<"]= ";
        cin>>v[i];
    }

    cout<<"El mayor es: "<<mayor(v,10)<<endl;
    cout<<"El menor es: "<<menor(v,10)<<endl;
    cout<<endl;
    cout<<"El promedio es: "<<promedio(v,10)<<endl;
    cout<<"El numero mas cercano al promedio es: "<<masCercanoAlPromedio(v,10)<<endl;

    return 0;
}
