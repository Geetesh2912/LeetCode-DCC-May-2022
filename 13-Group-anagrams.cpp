//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/group-anagrams/
//submission link: https://leetcode.com/submissions/detail/698825967/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> myMap;
        vector<vector<string>> ans;
        for (auto s: strs)              //firstly store all the strings with their respective lexographical ordrr in map for (ex: aet will be mapped to vector of strings eat,tea,ate)
        {
            string temp=s;
            sort(temp.begin(), temp.end());
            myMap[temp].push_back(s);
        }
        
        for (auto x: myMap)             //just push all strings which are together in map to ans seperatelly
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
