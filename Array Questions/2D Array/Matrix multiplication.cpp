#include<iostream>
using namespace std;
/* void Display(int arr[30][30],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout>>arr[i][j];
        }
    }
}
void Multiply(int m1[][30],int m2[][30],int n1,int n2,int n3)
{
    int ans[n1][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
            cin>>ans[i][j];
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    Display(ans,n1,n3);
}*/
int main()
{
    int n1,n2,n3;
    cout<<"Enter the values of n1, n2 & n3 respectively:";
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    cout<<"Enter the values for matrix 1:"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            cin>>m1[i][j];
    }
    cout<<"Enter the values for matrix 2:"<<endl;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
            cin>>m2[i][j];
    }

    //Multiply function
    int ans[n1][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
            ans[i][j]=0;
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }

    //Display Function
    cout<<"After Multiplication:"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    //Multiply(m1,m2,n1,n2,n3);
    return 0;
}