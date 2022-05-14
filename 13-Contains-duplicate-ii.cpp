//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/contains-duplicate-ii/
//submission link: https://leetcode.com/submissions/detail/698810628/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        for(int i=0; i<nums.size(); i++)
        {
            if (myMap.find(nums[i])!=myMap.end() and abs(i-myMap[nums[i]])<=k)
                return true;
            
            myMap[nums[i]]=i;
        }
        return false;
    }
};
