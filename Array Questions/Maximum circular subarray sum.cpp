#include<iostream>
#include<climits>
using namespace std;
int Kadanesalgo(int A[30],int n)
{
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+=A[i];
        if(currsum<0)
            currsum=0;
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}
int main()
{
    int n,sum=0,ans;
    cout<<"Enter the length of array:";
    cin>>n;
    int A[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int B[n];
    int nonwrapsum=Kadanesalgo(B,n);
    for(int i=0;i<n;i++)
    {
        B[i]=-A[i];
        sum+=A[i];
    }

    int wrapsum=Kadanesalgo(B,n);
    ans=sum+wrapsum;
    cout<<"The maximum circular subarray sum is "<<ans;
}