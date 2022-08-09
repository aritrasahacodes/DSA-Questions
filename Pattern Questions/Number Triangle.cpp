#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no.: ";
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=n-i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    } 
    return 0;
}