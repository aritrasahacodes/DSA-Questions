#include<iostream>
using namespace std;
int GCD(int m,int n)
{
    int c=1;
    while(c)
    {
        c=m % n;
        m=n;
        n=c;
    }
    cout<<m;
}
int main()
{
    int n,m;
    cout<<"Enter two values:";
    cin>>n>>m;
    if(n>m)
        GCD(n,m);
    else
        GCD(m,n);
}