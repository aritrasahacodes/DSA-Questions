#include<iostream>
using namespace std;

void rep(int arr[],int n)
{
    const int m=1e5+2;
    int a,b;
    int idx[m]={0};
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]==1)
            a=arr[i];
        idx[arr[i]]=1;
    }
    for(int i=1;i<=m;i++)
    {
        if(idx[i]==0)
        {

            b=i;
            break;
        }
    }
    cout<<a<<" "<<b;
    return;
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
    rep(arr,n);
}