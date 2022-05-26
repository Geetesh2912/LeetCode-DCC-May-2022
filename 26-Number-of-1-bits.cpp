//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/number-of-1-bits/
//submission link: https://leetcode.com/submissions/detail/707756669/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        //called as Brian Kernighan Algorithm
        
        int count=0;
        while (n!=0)
        {
            count++;
            n= n & (n-1);   //do dry run to get this: resets the set bit (1) to unset (0) 
                            //run this while loop until all bits are made 0
                            //count the no. of iterations needed
        }
        return count;
    }
};
