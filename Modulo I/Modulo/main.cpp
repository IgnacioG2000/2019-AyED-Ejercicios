#include <iostream>

using namespace std;

float modulo(float x)
{
    if(x>=0)
        return x;

    else
        return -x; //x*=(-1)
}


void moduloProcedimiento(int y,int &resultado)
{

    if(y>=0)
        resultado=y;

    else
        resultado=-y; //y*=(-1)

    return;
}
int main()
{
    int num;
    int num2;
    int r;

    cout<<"Ingresar un numero: ";
    cin>>num;

    cout<<"|"<<num<<"|= "<<modulo(num)<<endl;

    cout<<endl;

    cout<<"Ingresar el mismo numero: ";
    cin>>num2;

    moduloProcedimiento(num2,r);

    cout<<"|"<<num2<<"|= "<<r<<endl;


    return 0;
}
