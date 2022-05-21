#include <iostream>

using namespace std;

int main()
{
    int i=0;
    float valor,maxNeg=-0.00001,minPos=1000000,minRango=26.9,suma=0,promedio=0;

    cout<<"Ingresar valores: "<<endl;
    cin>>valor;

        while(valor!=0)
        {
            if(valor<0 && valor<maxNeg)
                maxNeg=valor;

            if(valor>0 && valor<minPos)
                minPos=valor;

            if(valor>-17.3 && valor<26.9 && valor<minRango)
                minRango=valor;

            suma+=valor;
            i++;

            cin>>valor;
        }
        promedio=suma/i;

        cout<<"El valor maximo negativo es: "<<maxNeg<<endl;
        cout<<"El valor minimo positivo es: "<<minPos<<endl;
        cout<<"El valor minimo entre -17,3 y 26,9 es: "<<minRango<<endl;
        cout<<"El promedio de todos los valores es: "<<promedio<<endl;

    return 0;
}
