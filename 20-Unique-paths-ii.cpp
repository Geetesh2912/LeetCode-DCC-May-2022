//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/unique-paths-ii/
//submission link: https://leetcode.com/problems/unique-paths-ii/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        //dynamic programming
        int rowSize = obstacleGrid.size();
        int colSize = obstacleGrid[0].size();
        vector<int> dp(colSize,0);
        dp[0]=1;
        for(int i=0; i<rowSize; i++)
        {
            for(int j=0; j<colSize; j++)
            {
                if(obstacleGrid[i][j]==1)
                    dp[j]=0;
                else if (j>0)
                    dp[j] = dp[j] + dp[j-1];
            }
        }
        return dp[colSize-1];
    }
};
