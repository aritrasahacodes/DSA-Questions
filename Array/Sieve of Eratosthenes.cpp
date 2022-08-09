#include<iostream>
using namespace std;
void sieve(int n)
{
    int arr[n]={0};
    for(int a=2;a*a<n;a++)
    {
        if(arr[a]==0)
        {
            for(int i=a*a;i<n;i++)
            {
                if((i+1)%a==0)
                    arr[i]=1;
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]==0)
            cout<<i+1<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    sieve(n);
}