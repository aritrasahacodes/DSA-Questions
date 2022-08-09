#include<iostream>
using namespace std;
void recordbreaker(int A[20],int n)
{
    int mx=0,count=0;
    for(int i=1;i<n;i++)
    {
        mx=max(mx,A[i]);
        if(A[i-1]>=mx)
        {
            cout<<A[i-1]<<" is a record breaking day!!"<<endl;
            count+=1;
        }
    }
    cout<<"Total no of record breaking days:"<<count;
}
int main()
{
    int n,A[20];
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    recordbreaker(A,n);
    return 0;
}