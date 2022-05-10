//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/combination-sum-iii/
//submission link: https://leetcode.com/submissions/detail/696981082/

class Solution {
    vector<vector<int>> ans;
    void combi(vector<int> &combination, int k, int n, int start)
    {
        if (k==combination.size())
        {
            if (n==0)
                ans.push_back(combination);
            return;
        }
        for (int i=start; i<=9; i++)
        {
            combination.push_back(i);
            combi(combination, k, n-i, i+1);
            combination.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combination;
        combi(combination, k, n, 1);
        return ans;
    }
};
