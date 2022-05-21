#include <iostream>

using namespace std;

int main()
{
   int vec[5];
   int *p=vec;

   cout<<"Ingresar los 5 elementos del vector: "<<endl;
   cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);

   cout<<"Leemos el vector: "<<endl;
    for(int i=0; i<5; i++)
        cout<<vec[i]<<endl;

    return 0;
}
