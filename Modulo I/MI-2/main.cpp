#include <iostream>

using namespace std;

int main()
{
    int dia,mes,anio,fecha=0;

    cout<<"Ingresar un dia: ";
    cin>>dia;

    cout<<"Ingresar un mes: ";
    cin>>mes;

    cout<<"Ingresar un anio: ";
    cin>>anio;

    fecha= anio*10000+mes*100+dia;

    cout<<"La fecha es "<<fecha<<endl;
    return 0;
}
