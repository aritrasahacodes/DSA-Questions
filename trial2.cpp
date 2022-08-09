#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>

using namespace std;

    int trap( vector <int> height) {
        vector <int> left;
        vector <int> right;
        int mx1=INT_MIN;
        int mx2=INT_MIN;
        for(int i=0;i<height.size();i++)
        {
            mx1=max(mx1,height[i]);
            left.push_back(mx1);
        }
        for(int i=height.size()-1;i>=0;i--)
        {
            mx2=max(mx2,height[i]);
            right.insert(right.begin(),1,mx2);
        }
        int sum=0;
        for(int i=0;i<height.size();i++)
        {
            sum+=min(left[i],right[i])-height[i];
        }
         return sum;
    }
int main()
{
    vector <int> v {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(v);
}