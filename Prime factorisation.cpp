#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int spf[n]={0};

    for(int i=2;i<=n;i++)
    {
        spf[i]=i;
    }


    for(int i=2;i<=n;i++)
    {
        for(int j=i*i;j<=n;j++)
        {
            if(spf[j]==j)
            {
                if(j%i==0)
                    spf[j]=i;
            }
        }
    }
    while(n)
    {
        if(n%spf[n]==0)
        {
        cout<<spf[n]<<"*";
        n/=spf[n];
        }
    }
}