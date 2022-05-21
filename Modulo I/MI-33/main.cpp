#include <iostream>

using namespace std;

int MCD(int A, int B)
{
    int R=0;

    R=A%B;

    while(R!=0)
    {
        A=B;
        B=R;

        R=A%B;

    }
        return B;
}

int main()
{
    int x,y;

    cout<<"Ingresar el primer numero: ";
    cin>>x;

    cout<<"Ingresar el segundo numero: ";
    cin>>y;

    cout<<"MCD("<<x<<";"<<y<<")="<<MCD(x,y)<<endl;
    return 0;
}
