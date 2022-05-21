#include <iostream>

using namespace std;

int main()
{
    float numeros, mayor=-100000000000;

        cout<<"Ingresar 10 numeros: "<<endl;

        for(int i=0; i<10; i++)
        {
        cin>>numeros;
            if(numeros>mayor)
                mayor=numeros;
        }

            cout<<"El mayor es: "<<mayor<<endl;
    return 0;
}
