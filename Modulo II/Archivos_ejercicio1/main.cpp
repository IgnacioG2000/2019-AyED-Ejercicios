#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    FILE *f;
    int n;
    float numeros;

    cout<<"Cuantos numeros desea ingresar: ";
    cin>>n;

    cout<<"Ingresar "<<n<<" valores: "<<endl;


    //Escribimos los valores en el archivo
    for(int i=0; i<n; i++)
    {
        cin>>numeros;

        if(f=fopen("Eje1","ab"))
        {
            fwrite(&numeros,sizeof(float),1,f);


            fclose(f);
        }
        else
        {
            cout<<"Error al intentar leer el archivo"<<endl;
            return 1;
        }
    }
    //Leemos los valores

        if(f=fopen("Eje1","rb"))
        {
            cout<<"Leemos valores: "<<endl;

           while(fread(&numeros,sizeof(float),1,f))

           cout<<numeros<<endl;

           fclose(f);
        }
        else
            cout<<"Error al intentar leer el archivo"<<endl;
    return 0;
}
