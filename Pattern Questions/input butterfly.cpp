#include<iostream>
using namespace std;
int main()
{
    
    int num,m,p,a;
    cout<<"Enter no. of rows:";
    cin>>num;
    a=num-4;
    m=num*3+a;
    p=4;
    for(int i=0;i<num;i++)
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
    for(int i=num-1;i>=0;i--)
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