#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no:";
    cin>>n;
    int k=2*n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<k;j++)
        {
            cout<<" ";
        }
        k-=2;
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    int p=1;
    for(int i=n;i>=0;i--)
    {
        for(int j=1;j<p;j++)
        {
            cout<<" ";
        }
        p+=2;
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}