#include <iostream>

using namespace std;

int main()
{
    int m,valores=1,cantMostrados=0;

    cout<<"Ingresar un numero natural: ";
    cin>>m;

    while(cantMostrados<m)
    {
        if(valores%3==0 && valores%5!=0)
        {
            cout<<valores<<endl;
            cantMostrados++;
        }
    valores++;
    }

    return 0;
}
