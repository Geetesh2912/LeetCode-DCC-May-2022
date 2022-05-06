//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
//submission link: https://leetcode.com/submissions/detail/694019672/

class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stackFreq;      //vector as stack pair used for keeping count of frequency of chars
        
        for (int i=0; i<s.length(); i++)
        {
            if (!stackFreq.empty() and stackFreq.back().first==s[i])        //if not empty and prev entered char is same as now then increment the frequency
                stackFreq.back().second++;
            else                    //else it must be a new char so insert char and freq 1
                stackFreq.push_back({s[i], 1});
            
            if (stackFreq.back().second==k)     //if the freq of last char is k pop it out
                stackFreq.pop_back();
        }
        
        string ans="";
        for (auto x: stackFreq)
        {
            ans.append(x.second, x.first);  //adds x.second char x.first times in the ans example ans.append(2,e) stores 'ee' in ans
        }
        return ans;
    }
};
