#include<iostream>
#include<climits>
using namespace std;

int trapwater(int arr[],int n)
{
    int left[n],right[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {

        mx=max(mx,arr[i]);
        left[i]=mx;
    }
    mx=0;
    for(int i=n-1;i>=0;i--)
    {
        mx=max(mx,arr[i]);
        right[i]=mx;
    }
    int water[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        water[i]=min(left[i],right[i])-arr[i];
        sum+=water[i];
    }
    
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<trapwater(arr,n);
}