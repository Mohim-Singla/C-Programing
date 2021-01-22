#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n=0,y=0,z;
    cout<<"Enter the number that you want to check: ";
    cin>>n;
    cout<<endl;

    int x=0;
    x= ceil(sqrt(n));

    for (int i=2;i<=x;i++)
    {
        int z;
        z=n%i;
        if (z==0)
        {
            y=1;
            //break;
        }

    }
    if (y==0 && n!=1 || n==2 || n==3)
    {
        cout<<"prime";
    }

    else{cout<<"not Prime";}
}
