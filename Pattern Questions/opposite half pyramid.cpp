#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,m;
    cout<<"Enter no. of lines: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=(n-i))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    
}