#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter no. of lines: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>j)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}