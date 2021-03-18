// Strong number : sum of individual digit's factorial gives the same number.

#include <iostream>

using namespace std;
int factor;
int factorial(int x)
{
    return (x==1 || x==0) ? 1: x*factorial(x-1);

}

int main()
{
    int n=0,rem,count=0,sum=0,mul;
    cin>>n;
    int no=n;
    rem=n;
    no=n;
    rem=n;
    while(rem!=0)
    {
        no=rem%10;
        146146
        mul=factorial(no);

        sum=sum+mul;
        rem=rem/10;
        mul=0;

    }
    cout<<sum<<endl;
    if (sum==n)
    {
        cout<<"yes"<<endl;

    }
    else
    {
        cout<<"False";
    }
}
