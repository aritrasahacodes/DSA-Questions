#include<iostream>
using namespace std;
int main()
{
    int n,A[20];
    cout<<"Enter the length of array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int dif,len=1,temp=0,count=0;
    for(int i=0;i<n-1;i++)
    {
        dif=A[i+1]-A[i];
        cout<<dif<<" ";
        if(temp==dif)
        {
            len+=1;
        }
        else
        {
            len=1;
        }
        count=max(len,count);
        temp=dif;
    }
    cout<<endl<<count;
    return 0;
}