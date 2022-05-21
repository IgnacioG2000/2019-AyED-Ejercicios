#include <iostream>

using namespace std;

int main()
{
    int v[100],n,mayor=-10000000;

    cout<<"Cuantos numeros desea ingresar en el vector? ";
    cin>>n;

    cout<<"Digitar "<<n<<" valores: ";

        for(int i=0; i<n; i++)
        {
            cin>>v[i];

            if(v[i]>mayor)
                mayor=v[i];
        }

    cout<<"El mayor de todos los numeros del vector es: "<<mayor<<endl;
    return 0;
}
