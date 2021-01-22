// Perfect number: it is a number that is equal to the sum of all the positive divisors excluding the number itself. example: 6:1+2+3.
#include <iostream>

using namespace std;

int main()
{
    int input,sum=0;
    cout<<"Enter the number: ";
    cin>>input;


    for (int i=input-1;i!=0;i--)
    {
        if (input%i==0)
        {
            sum=sum+i;
        }
        else
        {
            continue;
        }
    }
    if (sum==input)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"False";
    }
}
