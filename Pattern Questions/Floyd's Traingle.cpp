#include<iostream>
using namespace std;
int main()
{
    int a,i,j,s=1;
    cout<<"Enter no. of lines: ";
    cin>>a;
    for(i=0;i<a;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<s<<" ";
            s+=1;
        }
        cout<<"\n";
    }
}