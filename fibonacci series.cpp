// fibonacci series: series found by adding last two terms of the series first 2 are 0 and 1. thus series: 0 1 1 2 3 5 8 13 and so on...
#include <iostream>

using namespace std;

int main()
{
    int a=0,c=1,b=1;
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    if (n==1)
    {
        cout<<a;
    }
    else if (n==2)
    {
        cout <<b;
    }
    else
    {   //cout<<a<<" "<<b<<" ";
        for (int i=0;i<n;i++)
        {
            cout <<a<<" ";
            b=a+b;
            a=c;
            c=b;
        }
    }
}
