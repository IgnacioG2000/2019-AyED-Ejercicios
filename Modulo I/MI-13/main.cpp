#include <iostream>

using namespace std;

int main()
{
    int n,m,productoSucesivo=0;

    cout<<"Ingresar 2 numeros naturales: "<<endl;
    cin>>n>>m;

    for(int i=1; i<=m; i++)
        productoSucesivo+=n;

        cout<<"La multiplicacion por suma sucesiva es: "<<productoSucesivo<<endl;
    return 0;
}
