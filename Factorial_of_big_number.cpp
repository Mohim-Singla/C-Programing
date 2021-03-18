#include <iostream>

using namespace std;

int main()
{
    int fact;
    cin>>fact;
    int arr[600]={0};
    int len=1,x=0,num=0;
    arr[0]=1;

    for (int i=2;i<=fact;i++)
    {
        x=0;
        while(x<len)
        {
            arr[x]=arr[x]*i+num;
            num=arr[x]/10;
            arr[x]=arr[x]%10;
            x++;
        }
        while(num)
        {
            arr[len]=num%10;
            num=num/10;
            len++;
        }
    }
    len--;
    while(len>=0)
    {
        cout<<arr[len];
        len--;
    }
}
