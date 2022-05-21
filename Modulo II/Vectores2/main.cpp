#include <iostream>

using namespace std;

int main()
{
    int vec[6],mayor=-1000000000,menor=9999999999;

    cout<<"Ingresar 15 valores: "<<endl;

    for(int i=0; i<6; i++)
        cin>>vec[i];

    for(int j=0; j<6; j++)
    {
        if(vec[j]>mayor)
            mayor=vec[j];
    }

    for(int k=0; k<6; k++)
    {
        if(vec[k]<menor)
            menor=vec[k];
    }

    cout<<"El mayor de los valores es: "<<mayor<<endl;
    cout<<"El menor de los valores es: "<<menor<<endl;


    return 0;
}
