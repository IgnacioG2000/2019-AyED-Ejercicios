#include <iostream>

using namespace std;

int main()
{
    int n,posicionMayor=0,posicionMenor=0;
    float mayor=-10000000,menor=10000000,numeros;

    cout<<"Cuantos valores deseas ingresar?: ";
    cin>>n;

    cout<<endl;

    cout<<"Ingresar valores: "<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>numeros;

        if(numeros>mayor)
        {
            mayor=numeros;
            posicionMayor=i;
        }

        if(numeros<menor)
        {
            menor=numeros;
            posicionMenor=i;
        }
    }
        cout<<"El menor es: "<<menor<<" y fue ingresado en la posicion: "<<posicionMenor<<endl;
        cout<<"El mayor es: "<<mayor<<" y fue ingresado en la posicion: "<<posicionMayor<<endl;
    return 0;
}
