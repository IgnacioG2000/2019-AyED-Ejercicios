#include <iostream>

using namespace std;

int main()
{
    int v[5];
    int *p;
    p=v;

    cout<<"Ingresar los 5 elementos del vector: "<<endl;
    cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);

    cout<<endl;

    cout<<"Se ingreso lo siguiente (en forma inversa): "<<endl;
    for(int i=4; i>=0; i--)
        cout<<v[i]<<endl;

    return 0;
}
