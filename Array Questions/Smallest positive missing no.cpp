#include<iostream>
using namespace std;
int posno(int A[20],int n)
{
    const int N=1e6+2;
    char check[N];
    int temp;
    for(int i=0;i<N;i++)
    {
        check[i]='F';
    }
    for(int i=0;i<n;i++)
    {
        temp=A[i];
        check[temp]='T';
    }
    for(int i=0;i<N;i++)
    {
        if(check[i]!='T')
            return i;
    }
}
int main()
{
    int n,A[20],s;
    cout<<"Enter the length of array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    s=posno(A,n);
    cout<<"The smallest missing positive integer is: "<< s;
}