#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n,k;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the number to be searched:";
    cin>>k;
    cout<<BinarySearch(arr,n,k);
}