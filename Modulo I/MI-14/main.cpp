#include <iostream>

using namespace std;

int main()
{
    int n,sumaMenor=0,sumaMayor=0,j=0;
    float promedio=0;

    cout<<"Ingresar 50 numeros enteros: "<<endl;
    for(int i=0; i<50; i++)
    {
        cin>>n;
        if(n<=-10)
            sumaMenor=sumaMenor+n;
        if(n>=100)
        {
            j++;
            sumaMayor=sumaMayor+n;
            promedio=sumaMayor/j;
        }
    }
        cout<<"Suma= "<<sumaMenor<<endl;
        cout<<"Promedio= "<<(float)promedio<<endl;
    return 0;
}
