#include<iostream>
using namespace std;
void sumsubarray(int A[20],int n,int s)
{
    int sum=0,j=0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(sum>s)
        {
            sum-=A[j];
            j+=1;
        }
        if(sum==s)
        {
            cout<<j<<" to "<<i;
        }
    }
}
int main()
{
    int n,A[20],s,sum;
    cout<<"Enter the length of array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the sum of sub-array:";
    cin>>s;
    sumsubarray(A,n,s);
}