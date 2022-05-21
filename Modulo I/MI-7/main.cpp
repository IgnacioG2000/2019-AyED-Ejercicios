#include <iostream>

using namespace std;

int main()
{
    float a,b,c;

    cout<<"Ingresar los valores de los lados del triangulo: "<<endl;
    cin>>a>>b>>c;

    if((a+b)>c && (a+c)>b && (b+c)>a)
        cout<<"Forman triangulo"<<endl;

    else
        cout<<"No forman triangulo"<<endl;
    return 0;
}
