// n^m...
#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter integer: ";
    double base,power,count=1;
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;
    double result=1.0;

    while (count<=power)
    {
        if (power>0)
        {
            result=result*base;
            count++;
        }

    }
    count=0;
    while (count>power)
    {
        if (power<0)

        {
            result=result/base;
            count--;
        }
    }
    cout<<result;
}
