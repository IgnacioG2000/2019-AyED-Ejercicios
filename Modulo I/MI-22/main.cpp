#include <iostream>

using namespace std;

int main()
{
    string nombre,nombreJoven,nombreMayor;
    int fecha,menor=0;

    cout<<"Ingresar nombre: ";
    cin>>nombre;

    while(nombre!="fin")
    {

        cout<<"Ingresar fecha de nacimiento de "<<nombre<<" en la forma AAAAMMDD: ";
        cin>>fecha;

        if(fecha>menor)
        {
            menor=fecha;
            nombreJoven=nombre;
        }
        else
            nombreMayor=nombre;

        cout<<endl;

        cout<<"Ingresar nombre: ";
        cin>>nombre;

    }

        cout<<"La persona mas vieja es: "<<nombreMayor<<endl;
        cout<<"La persona mas joven es: "<<nombreJoven<<endl;

    return 0;
}
