#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    float base,pot=1;
    int exp;

    cout<<"Ingresar base y exponente: "<<endl;
    cin>>base>>exp;

    if(base==0){
        if(exp==0)
            cout<<"Indeterminacion"<<endl;
        else{

            if(exp<0)
                cout<<"Error matematico"<<endl;
            else
                cout<<"Resultado= 0"<<endl;
        }
    }
    else{

        if(exp==0)
            cout<<"Resultado = 1"<<endl;
        else{
            if(exp>0){
            for(int i=1; i<=abs(exp); i++)
                pot=pot*base;
                cout<<"Resultado= "<<pot<<endl;
            }
            else{

                base=1/base;
                for(int j=1; j<=abs(exp); j++)
                    pot=pot*base;
                    cout<<"Resultado= "<<pot<<endl;
        }


        }
    }

    return 0;
}
