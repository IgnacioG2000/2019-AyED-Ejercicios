#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    FILE *f;
    int n,numeros,posicion,nuevoNumero;
    char respuesta;

    cout<<"Cuantos numeros desea ingresar? ";
    cin>>n;

    cout<<"Ingresar "<<n<<" numeros: "<<endl;

    if(f=fopen("ej2.txt","wb"))
    {
        for(int i=0; i<n; i++)
        {
            cin>>numeros;

            fwrite(&numeros,sizeof(int),1,f);
        }
        fclose(f);
    }
    else
    {
        cout<<"No se pudo leer el archivo"<<endl;
        return 1;
    }

    cout<<"Leemos el archivo"<<endl;

    if(f=fopen("ej2.txt","rb"))
    {
        while(fread(&numeros,sizeof(int),1,f))
            cout<<numeros<<endl;

        fclose(f);
    }
    else
    {
        cout<<"No se pudo leer el archivo"<<endl;
        return 1;
    }

    cout<<endl;

    cout<<"Desea modificar algun numero? (S= si o N= no) ";
    cin>>respuesta;

    while(respuesta=='s' || respuesta=='S')
    {
        cout<<"Ingresar la posicion en la que desea modificar el numero: ";
        cin>>posicion;

        if(posicion<=n)
        {
            cout<<"Ingresar el nuevo numero: ";
            cin>>nuevoNumero;

            f=fopen("ej2.txt","rb+");

            fread(&numeros,sizeof(int)*(posicion-1),1,f);
            fwrite(&nuevoNumero,sizeof(int),1,f);

            fclose(f);
        }
        else
        {
            cout<<"No existe esa posicion. Ingresar un numero menor o igual a "<<n<<":"<<endl;
            break;
        }

        cout<<endl;

        cout<<"Leemos el archivo con el numero cambiado"<<endl;

        f=fopen("ej2.txt","rb");

        while(fread(&numeros,sizeof(int),1,f))
            cout<<numeros<<endl;

            fclose(f);

        cout<<endl;

        cout<<"Desea modificar algun numero? (S= si o N= no) ";
        cin>>respuesta;
    }

    return 0;
}
