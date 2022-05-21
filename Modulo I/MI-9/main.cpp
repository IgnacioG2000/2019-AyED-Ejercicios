#include <iostream>

using namespace std;

int main()
{
    int mes;
    int anio;

    cout<<"Ingresar un mes (2 digitos): ";
    cin>>mes;
    cout<<"Ahora ingresar un anio (4 digitos): ";
    cin>>anio;

    switch(mes)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout<<"El mes "<<mes<<" tiene 31 dias."<<endl;
    break;

    case 4: case 6: case 9: case 11:
        cout<<"El mes "<<mes<<" tiene 30 dias."<<endl;
    break;

    case 2:
        if(anio%4==0)
            cout<<"El mes "<<mes<<" tiene 29 dias."<<endl;
        else
            cout<<"El mes "<<mes<<" tiene 28 dias."<<endl;
    break;
    }
    return 0;
}
