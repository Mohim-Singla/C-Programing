// palindrome number: when reverse of a number is equal to the given number.
#include <iostream>

using namespace std;

int main()
{
    int n=0,no=0;
    cin>>n;
    no=n;
    int reversed=0;
    int result=0;
    for (int i=0;i<4;i++)
    {
        result=no%10;
        no=no/10;
        reversed = reversed*10+result;
    }
    cout<<reversed<<endl;
    if (reversed==n)
    {
        cout<<"yes";

    }
    else
        {cout<<"False";}

}
