#include <iostream>

using namespace std;

int main()
{
    float m1,b1,m2,b2,xi,yi;

    cout<<"Ingresar pendiente y ordenada al origen de la recta 1: "<<endl;
    cin>>m1>>b1;

    cout<<"Ingresar pendiente y ordenada al origen de la recta 2: "<<endl;
    cin>>m2>>b2;

    if(m1==m2){
        if(b1==b2)
            cout<<"Las rectas son iguales"<<endl;

        else
            cout<<"Las rectas son paralelas"<<endl;
    }
    else{

        xi=(b2-b1)/(m1-m2);
        yi=m1*xi+b1;

        cout<<"El punto de interseccion es: ("<<xi<<";"<<yi<<")"<<endl;
    }


    return 0;
}
