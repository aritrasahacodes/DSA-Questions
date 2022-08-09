#include<iostream>
#include<math.h>
using namespace std;

int Divisible(int n,int a,int b)
{
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    cout<<c1+c2-c3;
}

int main()
{
    int n,a,b;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    Divisible(n,a,b);
}