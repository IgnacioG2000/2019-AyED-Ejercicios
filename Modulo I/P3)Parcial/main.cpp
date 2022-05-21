#include <iostream>

using namespace std;

int main()
{
    float n,suma=0,promedio=0,menor=1000000000;
    int j=0;

    for(int i=1; i<=5; i++)
    {
        cout<<"Ingresar valores del juego "<<i<<":"<<endl;
        cin>>n;

        while(n!=0)
        {
            suma+=n;
            j++;

            if(n<menor)
            menor=n;

            promedio=suma/j;

            cin>>n;
        }

        cout<<"El menor del juego "<<i<<" es: "<<(float)promedio<<endl;

        cout<<endl;

        suma=0;
        j=0;
        promedio=0;
    }

        cout<<"El menor de todos los valores ingresados es: "<<menor<<endl;

    return 0;
}
