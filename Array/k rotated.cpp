#include<iostream>
#include<vector>
using namespace std;

int BSearch(vector <int>& n,int beg,int end,int key)
{
    int mid=(beg+end)/2;
    if(n[mid]==key)
    {
        return mid;
    }
    else if(n[mid]>key)
    {
        BSearch(n,beg,mid-1,key);
    }
    else
    {
        BSearch(n,mid+1,end,key);
    }
}


int search(vector<int>& nums, int target) 
{
    int mid=(nums.size()/2);
    if(nums[mid]>nums[0])
    {
        if(target>=nums[0] && target<=nums[mid])
        {
            return BSearch(nums,0,mid,target);
        }
        else
        {
            nums.erase(nums.begin(), nums.size()/2);
            nums.shrink_to_fit();
            search(nums,target);
        }
    }
    else
    {

    }
}

int main()
{
    vector <int> v {4,5,6,7,0,1,2};
    cout<<search(v,0);
}