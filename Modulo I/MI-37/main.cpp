#include <iostream>

using namespace std;

float CalcularPorcentajeDiferencia(int A,int B)
{
    return (float)(B-A)*100/(A+B);
}

int main()
{
    int x;
    int y;

    cout<<"Ingresar el primer valor: ";
    cin>>x;

    cout<<"Ingresar el segundo valor: ";
    cin>>y;

    cout<<"Resultado= "<<CalcularPorcentajeDiferencia(x,y)<<endl;
    return 0;
}
