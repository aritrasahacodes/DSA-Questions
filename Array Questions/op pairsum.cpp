#include<iostream>
#include<climits>
using namespace std;
int pairsum(int A[20],int n,int k)
{
    int i=0,j=n-1,a;
    while(i<n)
    {
        if(A[i]+A[j]==k)
        {
            cout<<"found at places: "<<i<<","<<j<<endl;
            a=1;
            return a;
        }
        else if(A[i]+A[j]<k)
        {
            i++;
        }
        else if(A[i]+A[j]>k)
        {
            j--;
        }
        
    }
}
int main()
{
    int n,k;
    cout<<"Enter the length of array:";
    cin>>n;
    int A[n];
    cout<<"Enter the elements in sorted order:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the value:";
    cin>>k;
    int a=pairsum(A,n,k);
    if(a==1)
        cout<<"TRUE";
    else
        cout<<"FALSE";
}