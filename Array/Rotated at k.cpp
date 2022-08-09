#include<iostream>
using namespace std;

//Modified Binary Search

int Rotated(int arr[],int n,int key)
{
    int low=0;
    int high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[low]<arr[mid])
        {
            if(key>=arr[low] && key<arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else 
        {
            if(key>arr[mid]&& key<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
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
    cout<<Rotated(arr,n,k);
}