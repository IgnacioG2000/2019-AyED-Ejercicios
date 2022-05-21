#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    FILE *f;
    int n,numeros,posicion,numeroNuevo;
    char respuesta;

    cout<<"Cuantos numeros desea ingresar? ";
    cin>>n;

    cout<<"Ingresar "<<n<<" numeros: "<<endl;

    if(f=fopen("hola.txt","wb"))
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
        cout<<"No se pudo abrir el archivo"<<endl;
        return 1;
    }

    cout<<"Leemos los valores del archivo"<<endl;

    if(f=fopen("hola.txt","rb"))
    {
        while(fread(&numeros,sizeof(int),1,f))
            cout<<numeros<<endl;

        fclose(f);
    }
    else
    {
        cout<<"No se pudo abrir el archivo"<<endl;
        return 1;
    }

    cout<<endl;

    cout<<"Desea modificar algun numero? (s/n) ";
    cin>>respuesta;

    while(respuesta=='s' || respuesta=='S')
    {
        cout<<"Ingresar la posicion del numero que quiere modificar: ";
        cin>>posicion;

        if(posicion<=n)
        {
            cout<<"Ingresar el numero nuevo: ";
            cin>>numeroNuevo;

            if(f=fopen("hola.txt","rb+"))
            {
                fseek(f,sizeof(int)*(posicion-1),SEEK_SET);
                fread(&numeros,sizeof(int),1,f);
                fseek(f,-sizeof(int),SEEK_CUR);
                fwrite(&numeroNuevo,sizeof(int),1,f);

                fclose(f);
            }
            else
            {
                cout<<"No se pudo abrir el archivo"<<endl;
                return 1;
            }

            cout<<"Mostramos el archivo con el numero cambiado"<<endl;

            if(f=fopen("hola.txt","rb"))
            {
                while(fread(&numeros,sizeof(int),1,f))
                    cout<<numeros<<endl;

                fclose(f);
            }

            cout<<"Desea modificar algun numero? (s/n) ";
            cin>>respuesta;
        }
        else
            cout<<"No existe esa posicion. Ingresar una posicion MENOR a "<<n<<endl;

            cout<<endl;
    }
    return 0;
}
