#include<iostream>
#include<climits>
using namespace std;

void bubblesort(int arr[],int n)
{


}
void chocolate(int arr[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    int mn=INT_MAX;
    int key=0;
    for(int i=0;i<n;i++)
    {
        int diff=arr[i+m-1]-arr[i];
        if(diff<mn)
        {
            mn=min(mn,diff);
            key=i;
        }
    }
    m=m+key;
    for(int i=key;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
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
    cout<<"Enter the number of students:";
    cin>>k;
    chocolate(arr,n,k);
}