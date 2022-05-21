#include <iostream>

using namespace std;

int EdadAGrupoEtario(int edad)
{
    if(edad>=0 && edad<=14)
        return 1;

    if(edad>=15 && edad<=21)
        return 2;

    if(edad>=22 && edad<=28)
        return 3;

    if(edad>=29 && edad<=35)
        return 4;

    if(edad>=36 && edad<=42)
        return 5;

    if(edad>=43 && edad<=49)
        return 6;

    if(edad>=50 && edad<=63)
        return 7;

    if(edad>63)
        return 8;
}

int main()
{
    int edad;

    cout<<"Ingresar una edad: ";
    cin>>edad;

    cout<<"Le corresponde el numero: "<<EdadAGrupoEtario(edad)<<endl;

    return 0;
}
