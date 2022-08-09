#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter no. of lines: ";
    cin>>m;
    cout<<"Enter no. of stars: ";
    cin>>n;
    for(i=1;i<=m;++i)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==m)
            {
                cout<<"*";
            }
            else if(j==1||j==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}