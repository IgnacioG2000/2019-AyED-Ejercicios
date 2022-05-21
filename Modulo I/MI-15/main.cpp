#include <iostream>

using namespace std;

int main()
{
    int tipoInfraccion,contador=0;
    string motivoInfraccion;
    float multa=0,multaL=0,multaM=0,multaG=0;
    char gravedad;

    for(int i=0; i<20; i++)
    {
        cout<<"Indicar tipo de infraccion: ";
        cin>>tipoInfraccion;

        cout<<"Indicar motivo de la infraccion: ";
        cin>>motivoInfraccion;

        cout<<"Ingresar la multa: ";
        cin>>multa;

        cout<<"Indicar el grado de la infraccion: ";
        cin>>gravedad;

        cout<<endl;

       switch(gravedad)
       {
       case 'l':case 'L':
        multaL+= multa;
        break;

       case 'm': case 'M':
        multaM+= multa;
        break;

       case 'g': case 'G':
        multaG+=multa;
        break;
       }

     if(tipoInfraccion==3 || tipoInfraccion==4)
     {
        if(gravedad=='g' || gravedad=='G')
            contador++;
     }
    }
     if(contador>3)
        cout<<"Clausurar fabrica"<<endl;

        cout<<"Valor total de las multas de infraccion L son: "<<multaL<<endl;
        cout<<"Valor total de las multas de infraccion M son: "<<multaM<<endl;
        cout<<"Valor total de las multas de infraccion G son: "<<multaG<<endl;
    return 0;
}
