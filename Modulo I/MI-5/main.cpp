#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout<<"Ingresar el valor de A: ";
    cin>>a;

    cout<<"Ingresar el valor de B (distinto que el primero): ";
    cin>>b;

    if(a>b)
        cout<<"Entre "<<a<<" y "<<b<<" el mayor es: "<<a;

    else
        cout<<"Entre "<<a<<" y "<<b<<" el mayor es: "<<b;


    return 0;
}
