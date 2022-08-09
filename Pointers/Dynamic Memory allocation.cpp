#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter two numbers:";
    cin>>n>>m;
    int *p= new int[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>*p;
    }
    cout<<"The array looks like: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout>>*p;
    }
    delete[]p;
    p=NULL;
    return 0;
}