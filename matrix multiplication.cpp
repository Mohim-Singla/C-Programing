// Matrix multiplication.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"Enter 1st matrix's n and m: ";
    int n1,m1,n2,m2;
    cin>>n1>>m1;
    cout<<"\nEnter 2nd matrix's n and m: ";
    cin>>n2>>m2;
    int mat1[n1][m1],mat2[n2][m2];
    if (m1!=n2||n1==0||m1==0||n2==0||m2==0)
    {
        cout<<"Invalid";
        return 0;
    }
    else if (m1==n2)
    {
        cout<<"\nEnter parameters of 1st Matrix: ";
        for (int i=0;i<n1;i++)
        {
            for (int j=0;j<m1;j++)
            {
                int val=0;
                cin>>val;
                mat1[i][j]=val;
            }
        }
        cout<<"\nEnter parameters of 2nd Matrix: ";
        for (int i=0;i<n2;i++)
        {
            for (int j=0;j<m2;j++)
            {
                int val=0;
                cin>>val;
                mat2[i][j]=val;
            }
        }
    }
    int res[n1][m2],sum=0;
    for (int i=0;i<n1;i++)
        {
            for (int j=0;j<m2;j++)
            {
                for (int x=0; x<n2;x++)
                {
                    sum = sum + mat1[i][x]*mat2[x][j];
                }

                res[i][j]=sum;
                sum=0;
            }


        }
        //cout<<"    ";
    for (int i=0;i<n1;i++)
        {
            for (int j=0;j<m2;j++)
            {
                cout<<"resultant matrix is: "<<endl<<endl;
                cout<<setw(5)<<res[i][j];
            }
            cout<<endl;
        }
    return 0;
}
