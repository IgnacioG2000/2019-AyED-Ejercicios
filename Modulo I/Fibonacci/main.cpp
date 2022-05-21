#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if(n==0 || n==1)
        return 1;

    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int x;

    cout<<"Ingresar un numero: ";
    cin>>x;

    cout<<"f("<<x<<")= "<<fibonacci(x)<<endl;
    return 0;
}
