#include<iostream>
using namespace std;
int main()
{
    int a,i,j;
    cout<<"enter a no.";
    cin>>a;
    for(i=1;i<=a;++i)
    {
        for(j=1;j<=i;++j)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}