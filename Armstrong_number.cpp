// Armstrong number : sum of individual numbers multiplied n no. of times results the same number. where n=no. of digits.
#include <iostream>

using namespace std;

int main()
{
    int n=0,rem,count=0,sum=0,mul=1;

    cin>>n;
    int no=n;
    rem=n;
    while(rem!=0)
    {
        rem=rem/10;
        count++;

    }
    no=n;
    int cnt=count;
    rem=n;
    while(rem!=0)
    {
        no=rem%10;

        while(cnt!=0)
        {
            mul=mul*no;
            cnt--;

        }
        sum=sum+mul;
        rem=rem/10;
        mul=1;
        cnt=count;
    }
    cout<<sum<<endl;
    if (sum==n)
    {
        cout<<"yes"<<endl;

    }
    else{cout<<"False";}
}
