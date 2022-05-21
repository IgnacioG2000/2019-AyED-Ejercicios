#include <iostream>

using namespace std;

void ordenAscendente(int v[], int tam)
{
    int aux;
    int *p;
    p=v;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=0; j<tam-1-i; j++)
        {
            if(*(p+j+1)<*(p+j))
            {
                aux=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=aux;
            }
        }
    }
}

void ordenDescendente(int v[], int tam)
{
    int aux;
    int *p;
    p=v;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=0; j<tam-1-i; j++)
        {
            if(*(p+j+1)>*(p+j))
            {
                aux=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=aux;
            }
        }
    }
}


int main()
{
    int *vec,tam;

    cout<<"Ingresar el tamanio del vector: ";
    cin>>tam;

    vec=new int[tam];

    cout<<"Ingresar "<<tam<<" valores: "<<endl;

    for(int i=0; i<tam; i++)
        cin>>vec[i];

    ordenAscendente(vec,tam);
    cout<<"Vector ordenado ascendentemente:"<<endl;
    for(int j=0; j<tam; j++)
        cout<<vec[j]<<endl;

    ordenDescendente(vec,tam);
    cout<<"Vector ordenado descendentemente:"<<endl;
    for(int k=0; k<tam; k++)
        cout<<vec[k]<<endl;

    delete [] vec;
    return 0;
}
