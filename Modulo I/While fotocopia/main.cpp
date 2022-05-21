#include <iostream>

using namespace std;

int main()
{
    int n;
    int i=0;
    float suma=0;
    float promedio=0;

    cout<<"Ingresar valores: "<<endl;
    while(n!=0){
        cin>>n;

        suma=suma+n;
        i++;
        promedio=suma/i;

    }
        cout<<"Suma= "<<suma<<endl;
        cout<<"Promedio= "<<promedio<<endl;
    return 0;
}
