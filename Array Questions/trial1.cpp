#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
    int minimumOperations(vector<int>& nums) {
        bool flag=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    flag=1;
                }
            }
        int count=0;
        while(flag)
        {
            int mn=INT_MAX;
            flag=0;
            count++;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    mn=min(mn,nums[i]);
                }
            }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    nums[i]=nums[i]-mn;
                }
            }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    flag=1;
                }
            }
        }
        return count;
    }



	int main()
	{
		vector<int> m {0};
		cout<<minimumOperations(m);
		// for(int i=0;i<m.size();i++)
        // {
        //     for(int j=0;j<m[0].size();j++)
        //     {
		// 		cout<<m[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
		return 0;
	}