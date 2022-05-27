//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
//submission link: https://leetcode.com/submissions/detail/708494329/

class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while (num)
        {
            if (num%2==0)
                num=num/2;
            else
                num=num-1;
            ans++;
        }
        return ans;
    }
};
