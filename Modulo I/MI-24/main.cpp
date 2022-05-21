#include <iostream>

using namespace std;

int main()
{
    int lote=1, valor, pos, suma, maximo=-1, minimo, maximoLote, posMaximoLote;

    do
    {
        pos=0;
        suma=0;
        cout<<"Ingrese valores para el sublote "<<lote<<": (termina con un valor=0) "<<endl;
        cin>>valor;
        minimo=valor;

        while(valor>0)
        {
            suma+=valor;
            pos++;
            if(valor>maximo)
            {
                maximo=valor;
                maximoLote=lote;
                posMaximoLote=pos;
            }
            if(valor<minimo)
                minimo=valor;

            cin>>valor;

        }

        if(pos!=0)
        {
            cout<<"Promedio del sublote "<<lote<<": "<<(float) suma/pos<<endl;
            cout<<"Minimo del sublote "<<lote<<": "<<minimo<<endl;
        }

        else
            cout<<"Sublote vacio."<<endl;
        lote++;
    }
    while(valor>=0); //Con punto y coma porque aca termina el Do While

    if(maximo!=-1) //Si no se leyo ningun sublote -> maximo==-1
    {
        cout<<"Total sublotes: "<<lote<<endl;
        cout<<"El maximo es: "<<maximo<<", en el lote "<<maximoLote<<" posicion "<<posMaximoLote<<endl;

    }

    return 0;
}
