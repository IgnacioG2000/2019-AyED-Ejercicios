#include <iostream>

using namespace std;

int factorial(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
        f*=i;

    return f;
}

int main()
{
    int num,factorial;

    cout<<"Ingresar un numero natural: ";
    cin>>num;

    factorial=factorial(num);

    cout<<n<<"!= "<<factorial<<endl;

    return 0;
}
