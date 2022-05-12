//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/permutations-ii/
//submission link: https://leetcode.com/submissions/detail/698141736/

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        //refer to leetcode 46 the permutation question on leetcode the solutions for both are similar, we onlhy need to take care of duplicates by skipping their swap
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        recursiveHelper(0, nums, ans);
        return ans;
    }
    
    void recursiveHelper(int start, vector<int> nums/*pass nums without reference to keep it unchanged unlike in leetcode 46*/, vector<vector<int>> &ans)
    {
        if (start>=nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=start; i<nums.size(); i++)
        {
            if (i!=start and nums[start]==nums[i])      //skipping duplicates but not ignoring itself
                continue;
            
            swap(nums[start], nums[i]);
            recursiveHelper(start+1, nums, ans);
            //swap(nums[start],nums[i]);
        }
    }
};
