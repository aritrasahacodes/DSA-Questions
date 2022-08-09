#include<iostream>
#include <climits>
using namespace std;
void firep(int A[20],int n)
{
    const int N=1e6+2;
    int B[N],temp,index=INT_MAX;
    for(int i=0;i<N;i++)
    {
        B[i]=-1;
    }
    int i;
    for(i=0;i<n;i++)
    {
        temp=A[i];
        if(B[temp]==-1)
            B[temp]=i;
        else
            index=min(B[temp],index);
    }
    cout<<index<<endl;
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
    firep(A,n);
    return 0;
}