#include<iostream>
using namespace std;
int main()
{
    int m=16,p=4;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int k=0;k<m;k++)
        {
            cout<<" ";
        }
        m-=4;
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=4;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        for(int k=0;k<p;k++)
        {
            cout<<" ";
        }
        p+=4;
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}