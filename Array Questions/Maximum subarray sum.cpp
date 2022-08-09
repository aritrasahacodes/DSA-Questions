#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,c;
    cout<<"Enter the length of array:";
    cin>>n;
    int x=(n*(n+1))/2;
    int z=0,sum[x],A[n],mx=INT_MIN;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    c=n;
    cout<<"The sum of subarrays are as follows:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sums=0;
            for(int k=i;k<=j;k++)
            {
                sums+=A[k];
            }
            cout<<sums<<endl;
            sum[z]=sums;
            z+=1;
        }
    }
    for(int i=0;i<x;i++)
    {
        mx=max(sum[i],mx);
    }
    cout<<"The maximum sum is: "<<mx;
}