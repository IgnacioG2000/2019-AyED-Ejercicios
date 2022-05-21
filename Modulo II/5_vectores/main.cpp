#include <iostream>

using namespace std;

void sumaVectores(int v1[], int v2[], int tam, int vsuma[])
{
    for(int i=0; i<tam; i++)
    {
       vsuma[i]= v1[i] + v2[i];
    }

    return;
}

int Producto(int v1[], int v2[], int tam)
{
    int resultado=0;

    for(int i=0; i<tam; i++)
    {
        resultado+= v1[i] * v2[i];
    }

    return resultado;

}


int main()
{
    int vec1[100];
    int vec2[100];
    int tamanio;
    int suma[100];

    cout<<"Ingrese el tam del vector 1 y 2 (entre 2 y 10 elementos): ";
    cin>> tamanio;

    cout<<"Ingrese los valores para el vector 1: "<<endl;
    for(int i=0; i<tamanio; i++)
    {
        cin>>vec1[i];
    }

    cout<<"Ingrese los valores para el vector 2: "<<endl;
    for(int j=0; j<tamanio; j++)
    {
        cin>>vec2[j];
    }

    sumaVectores(vec1,vec2,tamanio,suma);

    for(int k=0; k<tamanio; k++)
        cout<<"La suma de la componente "<<k+1<< "= "<<suma[k]<<endl;

    cout<<endl;

    cout<<"El producto escalar de los vectores es: "<<Producto(vec1,vec2,tamanio)<<endl;
    return 0;
}
