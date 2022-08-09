#include<iostream>
#include<vector>
#include<CLIMITS>
using namespace std;

vector<int> leaders(int a[], int n)
{
    int mx=INT_MIN;
    int count=0;
    vector <int> v;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>mx)
        {
            count++;
            v.push_back(a[i]);
        }
        mx=max(a[i],mx);
    }
    int size=v.size();
    int temp,mid=size/2;
    for(int i=0,z=size-1;i<=mid;i++,z--)
    {
        temp=v[i];
        v[i]=v[z];
        v[z]=temp;
    }
    return v;
}

int main()
{
    int a[]={16,17,4,3,5,2};
    vector <int> ans;
    ans=leaders(a,6);
    int size=ans.size();
    for(int i=0;i<size;i++)
    {
        cout<<ans[i]<<" ";
    }
}