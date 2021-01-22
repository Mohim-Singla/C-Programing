#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout<<"Enter n: "<<endl;
    cin>>n;
    for(int j=1;j<=n;j++)
    {


            for (int i=1;i<=(2*n-1);i++)
            {
                if ((i>=n-(j-1)) && (i<=n+(j-1)))
                {
                    cout <<'*';
                }
                else
                {
                    cout<<" ";
                }

            }
            cout<<endl;

    }
}
