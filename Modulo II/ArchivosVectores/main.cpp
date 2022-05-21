#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int *p;
   int tam;

   p=new int[tam+5];

   p[0]=67;
   p[1]=72;
   p[2]=27;
   p[3]=81;
   p[4]=23;

   cout<<*(p+2)<<endl;

    return 0;
}
