#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter a no:";
    cin>>n;
    k=2*n-2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<" ";
        }
        k-=1;
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}