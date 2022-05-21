#include <iostream>

using namespace std;

void invertir(int v[], int tam)
{
    int aux;
    for(int i=0; i<tam/2; i++)
    {
        aux=v[i];
        v[i]=v[tam-1-i];
        v[tam-1-i]=aux;
    }

}

int main()
{
    int v[]={65,34,23,56,43,12,54};

    for(int i=0; i<7; i++)

    invertir(v,7);

    for(int j=0; j<7; j++)
        cout<<"v["<<j<<"]: "<<v[j]<<endl;
    return 0;
}
