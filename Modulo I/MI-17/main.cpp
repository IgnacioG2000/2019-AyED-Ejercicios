#include <iostream>

using namespace std;

int main()
{
    float sueldo;
    int i=0,j=0,k=0,l=0

    cout<<"Ingresar los sueldos de los trabajadores: "<<endl;
    cin>>sueldo;

    while(sueldo!=0)
    {
        cin>>sueldo;

        if(sueldo<1520)
            i++;

        if(sueldo>=1520 && sueldo<2780)
            j++;

        if(sueldo>=2780 && sueldo<5999)
            k++;

        if(sueldo>=5999)
            l++;

    }
        cout<<"Los empleados que ganan menos de $1519 son: "<<i<<endl;
        cout<<"Los empleados que ganan entre $1520 y $2779 son: "<<j<<endl;
        cout<<"Los empleados que ganan entre $2780 y $5998 son: "<<k<<endl;
        cout<<"Los empleados que ganan mas de $5999 son: "<<l<<endl;
    return 0;
}
