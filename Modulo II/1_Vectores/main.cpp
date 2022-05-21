#include <iostream>

using namespace std;

int main()
{
    int vec[10];

    for(int i=0; i<10; i++)
    {

        cout<<"vec[" <<i<<"] = ";
        cin>>vec[i];
    }


    cout<<endl;

    cout<<"El vector en sentido inverso es: "<<endl;

    for(int j=9; j>=0; j--)

        cout<<"vec["<<j<<"] = "<<vec[j]<<endl;
    return 0;
}
