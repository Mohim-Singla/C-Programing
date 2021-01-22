//Floyd's triangle: right angles triangle printed as number of digits same as the row number and printing and getting a right angled triangle.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n=0,print=1;
    cout << "Enter number of rows: ";
    cin>>n;
    int count=1;
    while(count<=n)
    {
        for (int i=1;i<=count;i++)
        {
            cout<<setw(5)<<print;
            print++;
        }
        count++;
        cout<<endl;
    }

}
