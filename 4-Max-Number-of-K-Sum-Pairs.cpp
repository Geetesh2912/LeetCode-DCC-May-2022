//author: Geetesh Mandaogade

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        //this problem is very similar to two sum
        int count=0;
        unordered_map<int,int> myMap;
        
        for (int i=0; i<nums.size(); i++)
        {
            if (myMap[k-nums[i]]!=0)
            {
                count++;
                myMap[k-nums[i]]--;
            }
            else
                myMap[nums[i]]++;
        }
        return count;
    }
};
