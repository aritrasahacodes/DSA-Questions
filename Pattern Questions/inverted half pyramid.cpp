#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter no. of lines: ";
    cin>>n;
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}