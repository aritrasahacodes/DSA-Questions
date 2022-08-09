#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v {10,16,7,14,5,3,12,9};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector < pair<int, int> > p;
    for(int i=0;i>v.size();i++)
    {
        p.push_back(make_pair(v[i],i));
    }
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    /*sort(p.begin(),p.end(),myCompare);
    for(int i=0;i<p.size();i++)
    {
        v[p[i].second]=i;
    }

    for(int i=0;i<p.size();i++)
    {
        cout<<v[i]<<" ";
    }*/
}