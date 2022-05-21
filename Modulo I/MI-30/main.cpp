#include <iostream>

using namespace std;

int main()
{
    int contadorCeros=0, valores,N,sumaPromedio=0,sumaNeg=0,promedio=0,positivo=0,
    numAnterior,k=0;

  /*  //Punto 1
    cout<<"Ingresar 167 valores: "<<endl;

    for(int i=0; i<10; i++)
    {

        cin>>valores;

        if(valores>0)
        {
            sumaPromedio+=valores;
            positivo++;
        }

        if(valores==0)
            contadorCeros++;

        if(valores<0)
            sumaNeg+=valores;
    }
        promedio=sumaPromedio/positivo;

        cout<<"El promedio de valores positivos es: "<<promedio<<endl;
        cout<<"Se ingresaron: "<<contadorCeros<<" ceros"<<endl;
        cout<<"La sumatoria de valores negativos es: "<<sumaNeg<<endl;

    cout<<endl;

    //Punto 2
    contadorCeros=0;
    sumaPromedio=0;
    sumaNeg=0;
    promedio=0;
    positivo=0;

    cout<<"Cuantos valores desea ingresar: ";
    cin>>N;

    cout<<"Ingresar "<<N<<" valores: "<<endl;

    for(int i=0; i<N; i++)
    {

        cin>>valores;

        if(valores>0)
        {
            sumaPromedio+=valores;
            positivo++;
        }

        if(valores==0)
            contadorCeros++;

        if(valores<0)
            sumaNeg+=valores;

    }
        promedio=sumaPromedio/positivo;

        cout<<"El promedio de valores positivos es: "<<promedio<<endl;
        cout<<"Se ingresaron: "<<contadorCeros<<" ceros"<<endl;
        cout<<"La sumatoria de valores negativos es: "<<sumaNeg<<endl;

    cout<<endl;

    */

    //Punto 3

   do
   {
    contadorCeros=0;
    sumaPromedio=0;
    sumaNeg=0;
    promedio=0;
    positivo=0;

        cout<<"Ingresar numeros: "<<endl;
        cin>>valores;

        numAnterior=valores;
        if(valores>0)
        {
            sumaPromedio+=valores;
            positivo++;
        }

        if(valores==0)
            contadorCeros++;

        if(valores<0)
            sumaNeg+=valores;

        cin>>valores;
    }
        while(numAnterior!=valores);


        promedio=sumaPromedio/positivo;

        cout<<"El promedio de valores positivos es: "<<promedio<<endl;
        cout<<"Se ingresaron: "<<contadorCeros<<" ceros"<<endl;
        cout<<"La sumatoria de valores negativos es: "<<sumaNeg<<endl;


    cout<<endl;

    //Punto 4
    contadorCeros=0;
    sumaPromedio=0;
    sumaNeg=0;
    promedio=0;
    positivo=0;
    N=0;

        cout<<"Cuantos valores desea ingresar: ";
        cin>>N;

        cout<<"Ingresar "<<N<<" valores: "<<endl;

            for(int j=0; j<N; j++){
                cin>>valores;

                if(valores>0)
                {
                    sumaPromedio+=valores;
                    positivo++;
                }

                if(valores==0)
                    contadorCeros++;

                if(valores<0)
                    sumaNeg+=valores;

                if(contadorCeros>=4)
                    break;
            }

        promedio=sumaPromedio/positivo;

        cout<<"El promedio de valores positivos es: "<<promedio<<endl;
        cout<<"Se ingresaron: "<<contadorCeros<<" ceros"<<endl;
        cout<<"La sumatoria de valores negativos es: "<<sumaNeg<<endl;

    cout<<endl;

    //Punto 5
    contadorCeros=0;
    sumaPromedio=0;
    sumaNeg=0;
    promedio=0;
    positivo=0;
    N=0;

        cout<<"Cuantos valores desea ingresar: ";
        cin>>N;

        cout<<"Ingresar "<<N<<" valores: "<<endl;

            for(int j=0; j<N; j++){
                cin>>valores;

                if(valores>0)
                {
                    sumaPromedio+=valores;
                    positivo++;
                }
                promedio=sumaPromedio/positivo;

                if(valores==0)
                    contadorCeros++;

                if(valores<0)
                    sumaNeg+=valores;

                if(contadorCeros>=4)
                    break;

                if(promedio>6)
                    break;
            }


        cout<<"El promedio de valores positivos es: "<<promedio<<endl;
        cout<<"Se ingresaron: "<<contadorCeros<<" ceros"<<endl;
        cout<<"La sumatoria de valores negativos es: "<<sumaNeg<<endl;

    return 0;
}
