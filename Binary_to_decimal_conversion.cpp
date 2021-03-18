// Binary to decimal conversion.
#include <iostream>

using namespace std;

int main()
{
    int binary;
    cout<<"Enter the binary number: ";
    cin>>binary;
    int result=0,rem,prod=1;

    while (binary!=0)
    {
        rem=binary%10;
        result=result+rem*prod;
        prod=prod*2;
        binary=binary/10;

    }
    cout<<result;
}
