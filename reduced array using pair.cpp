#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mycompare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector <pair<int,int>> v;
    for(int i=0;i<n;i++)
        v.push_back(make_pair(arr[i],i));
    sort(v.begin(),v.end(),mycompare);

    for(int i=0;i<n;i++)
    {
        arr[v[i].second]=i;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
// 10 16 7 14 5 3 12 9