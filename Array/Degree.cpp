    #include<iostream>
    #include<vector>
    #include<climits>
    #include<algorithm>
    using namespace std;
    
    int findShortestSubArray(vector<int>& nums) {
        const int N=50000;
        vector <int> idx={0};
        int ans=INT_MIN;
        int mx=INT_MIN;
        int diff;
        for(int i=0;i<nums.size();i++)
        {
            idx[nums[i]]++;
            mx=max(mx,idx[nums[i]]);
        }
        for(int i=0;i<N;i++)
        {
            if(idx[i]==mx)
            {
                int p=i;
                int q=INT_MIN;
                for(int i=0;i<nums.size();i++)
                {
                    if(nums[i]==p)
                    q=max(q,i);
                    diff=q-p+1;
                }
                ans=min(ans,diff);
            }
        }
        return ans;
        
    }

    int main()
    {
        vector <int> a{1,2,2,3,1};
        cout<<findShortestSubArray(a);
    }