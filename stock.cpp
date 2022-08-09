#include<iostream>
#include<climits>
using namespace std;
int stock(int arr[],int n)
{
    int mx=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=min)
        {
            min=arr[i];
        }
        arr[i]=arr[i]-min;
        mx=max(mx,arr[i]);
    }
    return mx;
}

int main()
{
    int arr[]={7,8,6,5,4,3,1};
    cout<<stock(arr,7);
}