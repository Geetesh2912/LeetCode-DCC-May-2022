//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
//submission link: https://leetcode.com/submissions/detail/696254861/

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length()==0)
            return ans;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        ans.push_back("");
        for (int i=0; i<digits.length(); i++)
        {
            vector<string> temp;
            string mappedChar=mapping[digits[i]-'0'];
            for (int i=0; i<ans.size(); i++)
            {
                for (int j=0; j<mappedChar.length(); j++)
                {
                    temp.push_back(ans[i]+mappedChar[j]);
                }
            }
            ans=temp;
        }
        //ans=temp;
        return ans;
    }
};
