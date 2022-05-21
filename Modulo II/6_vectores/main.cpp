#include <iostream>

using namespace std;

void OrdenarDescendentemente(int v[], int tam)
{
    int aux;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=0; j<tam-1-i; j++)
        {
            if(v[j+1]>v[j])
            {
                aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
        }
    }
    return;
}

int main()
{
    int vec[100];
    int tam;

    cout<<"Ingrese el tam del vector: ";
    cin>>tam;

    cout<<"Ingresar los valores del vector: "<<endl;

    for(int i=0; i<tam; i++)
    {
        cin>>vec[i];
    }

    cout<<"Mostramos el vector normal"<<endl;
    for(int j=0; j<tam; j++)
        cout<<vec[j]<<endl;

    OrdenarDescendentemente(vec,tam);

    cout<<"Mostramos el vector ordenado descendentemente"<<endl;
    for(int k=0; k<tam; k++)
        cout<<vec[k]<<endl;


    return 0;
}
