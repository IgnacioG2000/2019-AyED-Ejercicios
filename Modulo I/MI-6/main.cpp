#include <iostream>

using namespace std;

int main()
{
    int fecha1,fecha2;

    cout<<"Ingresar fecha 1 en formato AAAAMMDD: ";
    cin>>fecha1;

    cout<<"Ingresar fecha 2 en formato AAAAMMDD: ";
    cin>>fecha2;

    if(fecha1>fecha2)
        cout<<"Fecha 1 es mas reciente"<<endl;

    if(fecha1==fecha2)
        cout<<"Las fechas son iguales"<<endl;

    if(fecha1<fecha2)
        cout<<"Fecha 2 es mas reciente"<<endl;

    return 0;
}
