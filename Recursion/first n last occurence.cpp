#include<iostream>
#include<climits>
using namespace std;
int mn=INT_MAX,mx=INT_MIN;
void occurence(int arr[],int n,int k)
{
    if(n==0)
        return;
    if(*arr==k)
    {
        mx=max(mx,n);
        mn=min(mn,n);
    }
    occurence(arr+1,n-1,k);
    if(n==mx)
        cout<<"First occurence:"<<n<<" from end"<<endl;
    if(n==mn)
        cout<<"Last occurence:"<<n<<" from end"<<endl;
}
int firoccurence(int arr[],int n,int i,int key)
{
    if(i==n)
        return -1;
    if(arr[i]==key)
    {
        cout<<i;
        return i;
    }
    return firoccurence(arr,n,i+1,key);
}
int lastoccurence(int arr[],int n,int i,int key)
{
    if(i==n)
        return -1;
    int restArray=lastoccurence(arr,n,i+1,key);
    if(restArray!=-1)
    {
        return restArray;
    }
    if (arr[i]==key)
    {
        cout<<i;
        return i;
    }
    return -1;
}


int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n],k;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the value to be searched: ";
    cin>>k;
    int i=0;
    //occurence(arr,n,k);
   // firoccurence(arr,n,i,k);
    lastoccurence(arr,n,i,k);
}