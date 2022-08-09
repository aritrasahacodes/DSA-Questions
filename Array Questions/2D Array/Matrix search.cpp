#include<iostream>
using namespace std;
int main()
{
    int n,m,k,x;
    cout<<"Enter the row and column size respectively:";
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter the values:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    cout<<"Enter the value to be searched:";
    cin>>k;
    //Search algo
    //start from top-right or bottom-left corners
    int r=0,c=m-1;
    while(r<n and c>=0)
    {
        if(a[r][c]==k)
            x=1;
        if(a[r][c]>k)
            c--;
        else
            r++;
    }
    if(x==1)
        cout<<"TRUE";
    else
        cout<<"FALSE";

    return 0;
}