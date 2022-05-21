#include <iostream>

using namespace std;

int main()
{
    int L1;
    int L2;
    int L3;

    cout<<"Ingresar los 3 lados del triangulo: "<<endl;
    cin>>L1>>L2>>L3;

    cout<<endl;

    if(L1==L2 && L2==L3)
        cout<<"El triangulo es equilatero"<<endl;

    if(L1==L2 && L2!=L3 || L1!=L2 && L2==L3)
        cout<<"El triangulo es isosceles"<<endl;

    if(L1!=L2 && L2!=L3)
        cout<<"El triangulo es escaleno"<<endl;

    return 0;
}
