#include <iostream>

using namespace std;

int factorialRecursivo(int n)
{
    if (n==0)
        return 1;

    else
        return n*(factorialRecursivo(n-1));
}

int main()
{
    int x;

    cout<<"Ingresar un numero natural: ";
    cin>>x;

    cout<<x<<"!= "<<factorialRecursivo(x)<<endl;
    return 0;
}
