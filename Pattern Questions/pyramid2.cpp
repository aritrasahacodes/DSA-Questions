#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,n;
    cout<<"Enter a no.";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}