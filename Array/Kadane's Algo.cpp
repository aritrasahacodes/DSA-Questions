#include<iostream>
using namespace std;
int subarray(int arr[],int n)
{
    int sum=0,maxtillnow;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxtillnow=max(maxtillnow,sum);
        if(sum<0)
            sum=0;
    }
    return maxtillnow;
}
int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<subarray(arr,n);
}