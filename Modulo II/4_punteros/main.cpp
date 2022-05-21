#include <iostream>

using namespace std;

int *OrdenarVector(int *ordenado, int tam)
{
    int aux;

    for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam-1-i; j++)
        {
            if(*(ordenado+j+1)<*(ordenado+j))
            {
                aux=*(ordenado+j+1);
                *(ordenado+j+1)=*(ordenado+j);
                *(ordenado+j)=aux;
            }
        }
    }
    return ordenado;
}

int main()
{

    int tam,*p;

    cout<<"Ingresar el tam del vector: ";
    cin>>tam;

    int *vec= new int[tam];

    cout<<"Ingresar "<<tam<<" elementos: "<<endl;

    for(int i=0; i<tam; i++)
        cin>>vec[i];

    cout<<endl;

    p=OrdenarVector(vec,tam);

    cout<<"Vector ordenado"<<endl;
    for(int j=0; j<tam; j++)
        cout<<*(p+j)<<endl;

    delete [] vec;
    return 0;
}
