#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cout<<"Enter no. of lines: ";
    cin>>m;
    cout<<"Enter no. of stars: ";
    cin>>n;
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}