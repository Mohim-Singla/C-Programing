#include <iostream>

using namespace std;

void binary_exp(int base, int power)
{
    int result=1;
    while(power)
    {
        if (power%2)
        {
            result*=base;
            power--;
        }
        else
        {
            base*=base;
            power/=2;
        }
    }
    cout<<result;
}

int main()
{
    int base,power;
    cin>>base>>power;

    binary_exp(base,power);
}
