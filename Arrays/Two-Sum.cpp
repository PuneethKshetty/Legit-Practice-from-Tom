#Two sum problem

Brute force:
#include<bits/stdc++.h>

vector<int> twoSum(vector<int> &nums, int target)
{
    for(int i=0;i<nums.size();i++)
        for(int j = i+1;j<nums.size();j++)
            if(target == nums[i] + nums[j])
            {
                return {i,j};
            }
    return {};  
}


Optimized approach:
#include<bits/stdc++.h>

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int,int> mp;
    vector<int> res;
    for(int i=0;i<nums.size();i++)
    {
        if(mp.find(target - nums[i]) != mp.end())
        {
           res.push_back(mp[target - nums[i]]);
           res.push_back(i);
           return res;
        }
      else
        {
            mp[nums[i]] = i;
        }
    }
  return res;   
}
