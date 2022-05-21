#include <iostream>

using namespace std;

int factorial (int n)
{
    if(n==0)
        return 1;

    else
        return n*(factorial(n-1));

}

int multiplos3(int n)
{
    int contador3=0;

    if(n%3==0)
        contador3++;

    return contador3;
}

int multiplos5(int n)
{
    int contador5=0;

    if(n%5==0)
        contador5++;


    return contador5;
}

int multiplos3y5(int n)
{
    int contador3y5=0;

    if(n%3==0 && n%5==0)
        contador3y5++;


    return contador3y5;
}


int main()
{
    int x;

    cout<<"Ingresar 10 numeros enteros: ";
    for(int i=0; i<3; i++)
    {
        cin>>x;

        cout<<x<<"!= "<<factorial(x)<<endl;
    }

        cout<<"De los numeros que se ingresaron hubo: "<<multiplos3(x)<<" multiplos de 3"<<endl;
        cout<<x<<" tiene "<<multiplos5(x)<<" multiplos de 5"<<endl;
        cout<<x<<" tiene "<<multiplos3y5(x)<<" multiplos de 3 y de 5"<<endl;

    return 0;
}
