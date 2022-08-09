#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int n)
{
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    display(arr,n);
    return;
}

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    cout<<"Enter you elements:";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    reverse(arr,n);
}