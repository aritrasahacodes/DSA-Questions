#include<iostream>
using namespace std;
int main()
{
    int n,A[20],c;
    cout<<"Enter the length of array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    c=n;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<A[k]<<" ";
            }
            cout<<endl;
        }
    }
}