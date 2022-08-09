#include<iostream>
#include<climits>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        int ans=INT_MIN,diff;
        vector <int> m;
        vector <int> n;
        for(int i=prices.size()-1;i>=0;i--)
        {
            mx=max(mx,prices[i]);
            m.push_back(mx);
        }
        reverse(m.begin(),m.end());
        for(int i=0;i<prices.size();i++)
        {
            mn=min(mn,prices[i]);
            n.push_back(mn);
            diff=m[i]-n[i];
            ans=max(ans,diff);
        }
        return ans;
    }

int main()
{
    vector <int> v {7,6,4,3,1};
    cout<<maxProfit(v);
}