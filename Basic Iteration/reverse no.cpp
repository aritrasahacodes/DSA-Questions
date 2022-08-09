#include<iostream>
using namespace std;
int main()
{
    int n,a=0,r;
    cout<<"Enter a no.";
    cin>>n;
    while(n)
    {
    r=n%10;
    n/=10;
    a=a*10+r;
    }
    cout<<"Revese no:"<<a;
}
