#include <iostream>

using namespace std;


int cantElementos(int v[], int tamFisico)
{
    int i=0;
    while(i<tamFisico && v[i]!=0)
        i++;

    return i;
}

void apareo(int v1[], int tam1, int v2[], int tam2, int vresultado[])
    {
        int i=0, j=0, k=0;

        while(i<tam1 && j<tam2)
        {
            if(v1[i]<v2[j])
            {
                vresultado[k]=v1[i];
                i++;
            }
            else
            {
                vresultado[k]=v2[j];
                j++;
            }
            k++;
        }
        for(int cont=i; cont<tam1; cont++)
        {
            vresultado[k]=v1[i];
            k++;
        }
        for(int cont=j; cont<tam2; cont++)
        {
            vresultado[k]=v2[j];
            k++;
        }
    }


int main()
{
    int vec1[5]= {40,60,67,80,99};
    int vec2[5]= {4,43,55,70,100};
    int vresult[50]={0};

    apareo(vec1,5,vec2,5,vresult);


    for(int k=0; k<cantElementos(vresult,50); k++)
        cout<<vresult[k]<<endl;

    return 0;
}

