#include <iostream>

using namespace std;

int main()
{
    int x;
    float QuintaParte=0;
    int Resto=0;
    float SeptimaParte=0;

    cout<<"Ingresar un valor: ";
    cin>>x;

    QuintaParte= x/5;
    Resto= x%5;
    SeptimaParte= QuintaParte/7;

    cout<<"La quinta parte de "<<x<<" es: "<<QuintaParte<<endl;
    cout<<"El resto de la division por 5 es: "<<Resto<<endl;
    cout<<"La septima parte de "<<QuintaParte<<" es: "<<SeptimaParte<<endl;

    return 0;
}
