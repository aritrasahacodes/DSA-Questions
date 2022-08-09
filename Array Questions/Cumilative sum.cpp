#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of array:";
    cin>>n;
    int sum[n+1],A[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sum[0]=0;
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+A[i-1];
    }
    int mx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int sums=0;
        for(int j=0;j<i;j++)
        {
            sums=sum[i]-sum[j];
            cout<<sum<<" ";
            mx=max(sums,mx);
        }
    }
    cout<<mx;
}