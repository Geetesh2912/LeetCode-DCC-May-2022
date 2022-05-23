//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/ones-and-zeroes/
//submission link: https://leetcode.com/submissions/detail/705687121/

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int dp[101][101]{0};
        for (int i=0; i<strs.size(); i++)
        {
            int nZeroes=0;
            int nOnes=0;
            for (char c: strs[i])
            {
                if (c=='0')
                    nZeroes++;
                else
                    nOnes++;
            }
            
            for (int i=m; i>=nZeroes; i--)
            {
                for (int j=n; j>=nOnes; j--)
                {
                    dp[i][j]= max (dp[i][j], dp[i-nZeroes][j-nOnes] + 1);
                }
            }
        }
        return dp[m][n];        
    }
};

