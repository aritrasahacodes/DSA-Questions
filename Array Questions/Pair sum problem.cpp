#include<iostream>
#include<climits>
using namespace std;
int pairsum(int A[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i]+A[j]==k)
            {
                return 1;
            }
        }
    }
}
int main()
{
    int n,k;
    cout<<"Enter the length of array:";
    cin>>n;
    int A[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the value:";
    cin>>k;
    int a=pairsum(A,n,k);
    if(a==1)
        cout<<"TRUE";
    else
        cout<<"FALSE";
}