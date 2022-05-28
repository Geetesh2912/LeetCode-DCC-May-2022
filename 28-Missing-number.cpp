//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/missing-number/
//submission link: https://leetcode.com/submissions/detail/709205064/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //using bit manipulation
        //let's understand a dry run
        //nums=[3,0,1]
        //first for loop will give ans=3^0^1
        //second for loop will-> (3^0^1)^0^1^2^3 -> 2
        
        int ans=0;
        for (int i=0; i<nums.size(); i++)
        {
            ans=ans^nums[i];
        }
        for (int i=0; i<=nums.size(); i++)
        {
            ans=ans^i;
        }
        return ans;
        
         
    
//other solutions
        //1) using hashmap O(n) space
//         int n=nums.size();
//         unordered_map<int, int> myMap;
//         for (int i=0; i<n; i++)
//         {
//             myMap[nums[i]]++;
//         }
        
//         for (int i=0; i<=n; i++)
//         {
//             if (myMap.find(i)==myMap.end())
//                 return i;
//         }
//         return -1;
        
        //2) using sum
//         find sum from 0 to n and substract from sum of elems in nums, got required ans
    }
};
