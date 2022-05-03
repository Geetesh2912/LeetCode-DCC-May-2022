//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
//submission link: https://leetcode.com/submissions/detail/692289656/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        while (s<nums.size()-1 and nums[s]<=nums[s+1])  //find 1st index from front which breaks sorting
            s++;
        while (e>0 and nums[e]>=nums[e-1])      //find 1st index from back which breaks sorting
            e--;
        
        if (s==nums.size()-1)       //s reaches end means, already sorted
            return 0;
        
        //now we have a window of s to e which is not sorted but theres a possibility that this window contains elements which is more smaller than some elements already sorted i.e from 0 to s and same for the back part there can be a element in s to e which is actually greater than eleements in e to nums.size
        
        int maxInWindow=INT_MIN;
        int minInWindow=INT_MAX;
        for (int i=s; i<=e; i++)
        {
            maxInWindow=max(maxInWindow,nums[i]);
            minInWindow=min(minInWindow,nums[i]);
        }
        
        //now we expand this window to include also those values which are greater than minInWindow from front and same for backward
        while (s-1>=0 and nums[s-1]>minInWindow)
            s--;
        while (e+1<=nums.size()-1 and nums[e+1]<maxInWindow)
            e++;
        
        return e-s+1;
        
    }
};
