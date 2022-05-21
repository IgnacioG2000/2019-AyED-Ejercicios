#include <iostream>

using namespace std;

string Tendencia(int A,int B)
{
    if((B-A)<0)
        return "Decreciente";

    else

        if((B-A)<(A*0.02))
            return "Estable";

    else

        if((B-A)<(A*0.05))
            return "Leve ascenso";

    else
        return "En ascenso";
}

int main()
{
    int x;
    int y;

    cout<<"Ingresar el primer valor: ";
    cin>>x;

    cout<<"Ingresar el segundo valor: ";
    cin>>y;

    cout<<"Segun esos numeros, el resultado es: "<<Tendencia(x,y)<<endl;
    return 0;
}
