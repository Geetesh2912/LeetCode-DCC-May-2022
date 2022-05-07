//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/132-pattern/
//submission link: https://leetcode.com/submissions/detail/694966258/

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> myStack;
        int thirdInt=INT_MIN;
        for (int i=nums.size()-1; i>=0; i--)
        {
            if (thirdInt>nums[i])
                return true;
            while ( !myStack.empty() and myStack.top()<nums[i])
            {
                thirdInt=myStack.top();
                myStack.pop();
            }
            myStack.push(nums[i]);
        }
        return false;
    }
};
