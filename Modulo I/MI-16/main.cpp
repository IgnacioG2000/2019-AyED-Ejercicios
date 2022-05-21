#include <iostream>

using namespace std;

int main()
{
    int n,i=0;

    cout<<"Ingresar valores: "<<endl;
    cin>>n;

    while(n>=0)
    {
        cin>>n;
        i++;
    }

    cout<<"La cantidad de valores ingresados fueron: "<<i<<endl;

    return 0;
}
