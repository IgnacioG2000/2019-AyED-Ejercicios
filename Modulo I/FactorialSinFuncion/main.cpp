#include <iostream>

using namespace std;

int main()
{
    int n,factorial=1;

    cout<<"Ingresar un numero: ";
    cin>>n;

    for(int i=1; i<=n; i++)
        factorial*=i;

    cout<<n<<"!= "<<factorial<<endl;

    return 0;
}
