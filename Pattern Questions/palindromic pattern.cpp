#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    int k=2*n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<" ";
        }
        k-=2;
        for(int j=i;j>0;j--)
        {
            cout<<j<<" ";
        }
        for(int j=1;j<i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}