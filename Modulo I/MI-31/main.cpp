#include <iostream>

using namespace std;

int main()
{
    string domicilio,nombre,domicilioMaxIntegrantes,nombresPrimario;
    int integrantes,maxIntegrantes=0,edad,familia,
    primario=0,secundario=0,terciario=0,universitario=0,
    analfabetismo=0,totalAnalfabetismo=0,porcentajeAnalfabetismo=0,
    edadTotalFamilia=0,promedioFamilia=0,edadTotalCiudad=0,promedioCiudad=0;
    char vivienda,sexo,estudios,indicador;

        cout<<"Indicar cantidad de integrantes de la familia: ";
        cin>>integrantes;

        while(integrantes!=0)
        {
            cout<<"Ingresar la direccion (todo junto): ";
            cin>>domicilio;

            for(int j=1; j<=integrantes; j++)
            {
                cout<<endl;

                cout<<"Ingresar nombre del integrante "<<j<<": ";
                cin>>nombre;

                cout<<"Ingresar su edad: ";
                cin>>edad;

                //Punto D
                edadTotalFamilia+=edad;

                cout<<"Sexo? (M-Masculino o F-Femenino): ";
                cin>>sexo;

                cout<<"Indicar nivel de estudios alcanzados(N-No posee,P-Primario,S-Secundario o U-Universitario): ";
                cin>>estudios;

                if(estudios=='n' || estudios=='N')
                    break;

                cout<<"Ingresar su indicador(C-completo o I-incompleto): ";
                cin>>indicador;


                //Punto C
              if(integrantes>maxIntegrantes)
              {
                maxIntegrantes=integrantes;
                domicilioMaxIntegrantes=domicilio;
              }
                    //Punto E
                    if(estudios=='p' || estudios=='P')
                    {
                        if(indicador=='i' || indicador=='I')
                        primario++;
                    }

                    if(estudios=='s' || estudios=='S')
                    {
                        if(indicador=='i' || indicador=='I')
                        secundario++;
                    }

                    if(estudios=='t' || estudios=='T')
                    {
                        if(indicador=='i' || indicador=='I')
                        terciario++;
                    }

                    if(estudios=='u' || estudios=='U')
                    {
                        if(indicador=='i' || indicador=='I')
                        universitario++;
                    }

            }
                //Punto D
                promedioFamilia=edadTotalFamilia/integrantes;

                cout<<endl;

                cout<<"El promedio de edad de la familia es: "<<promedioFamilia<<endl;

                cout<<endl;

                cout<<"Indicar cantidad de integrantes de la familia: ";
                cin>>integrantes;

                cout<<endl;

        }
                cout<<"El domicilio donde vive la mayor cantidad de integrantes es: "<<domicilioMaxIntegrantes<<endl;
                cout<<"La cantidad de encuestados sin estudios PRIMARIOS son: "<<primario<<endl;
                cout<<"La cantidad de encuestados sin estudios SECUNDARIOS son: "<<secundario<<endl;
                cout<<"La cantidad de encuestados sin estudios TERCIARIOS son: "<<terciario<<endl;
                cout<<"La cantidad de encuestados sin estudios UNIVERSITARIOS son: "<<universitario<<endl;

    return 0;
}
