#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the row and column size respectively:";
    cin>>n>>m;
    int a[n][m],b[m][n];
    cout<<"Enter the values:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    cout<<"After Transpose:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            b[i][j]=a[j][i];
            cout<<b[i][j]<<" ";

        /*swap using only one matrix

            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;*/
        }
        cout<<endl;
    }
}