//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/permutations/
//submission link: https://leetcode.com/submissions/detail/698147092/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(ans, nums, 0);
        return ans;
    }
    
    void helper(vector<vector<int>> &ans, vector<int> nums/*if we pass nums as value  we dont need to swap backtrack inorder to make the nums as it was*/, int start)
    {
        if (start>=nums.size())
        {
            ans.push_back(nums);
            return;
        }    
        for (int i=start; i<nums.size(); i++)   //permutations
        {
            swap(nums[start],nums[i]);      //swap
            helper(ans,nums,start+1);       //recursion
            //swap(nums[start],nums[i]);      //backtrack
        }
    }
};
