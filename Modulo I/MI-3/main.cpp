#include <iostream>

using namespace std;

int main()
{
    int numero,dia,mes,anio;

    cout<<"Ingresar un numero de 8 digitos: ";
    cin>>numero;

    dia= numero%100;
    mes= (numero%1000)/100;
    anio= numero/10000;

    cout<<"Dia= "<<dia<<endl;
    cout<<"Mes= "<<mes<<endl;
    cout<<"Anio= "<<anio<<endl;

    return 0;
}
