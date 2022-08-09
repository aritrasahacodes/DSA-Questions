#include<iostream>
#include<vector>
using namespace std;

    void sortColors(vector<int>& nums) {
        int mid=0;
        int start=0,end=nums.size()-1;
        while(mid<=end)
        {
            if(nums[mid]==0)
            {
                int temp=nums[mid];
                nums[mid]=nums[start];
                nums[start]=temp;
                start++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                int temp=nums[mid];
                nums[mid]=nums[end];
                nums[end]=temp;
                end--;
            }
        }
    }
int main()
{
    vector <int> v {0,0};
    sortColors(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}