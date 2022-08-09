#include<iostream>
using namespace std;
void dnf(int arr[],int n)
{
    int low=0,mid=0,high=n-1,temp;
    while(mid<=high)
    {
        if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==0)
        {
            temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]==temp;
            low++;mid++;
        }
        else
        {
            temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,0,2,1,0,1,2,1,2};
    int n=9;
    dnf(arr,n);

}