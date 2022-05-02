//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/sort-array-by-parity/
//submission link: https://leetcode.com/submissions/detail/691574393/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int lo=0;
        int hi=nums.size()-1;
        
        while (lo<=hi)
        {
            if (nums[lo]%2!=0 and nums[hi]%2==0)
                swap(nums[lo],nums[hi]);
            else if( nums[lo]%2==0)
                lo++;
            else
                hi--;
        }
        return nums;
    }
};
