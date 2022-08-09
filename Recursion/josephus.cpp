#include<iostream>
using namespace std;
int jose(int n,int k)
{
    if(n==1)
        return 0;
    return (jose(n-1,k)+k)%n;
}
int main()
{
    cout<<jose(5,3);
}