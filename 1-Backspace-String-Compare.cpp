//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/backspace-string-compare/
//submission link: https://leetcode.com/submissions/detail/690961700/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sStack;
        stack<char> tStack;
        
        for (int i=0; i<s.length(); i++)    //Note that after backspacing an empty text, the text will continue empty.
        {
            if (s[i]=='#' and !sStack.empty())
                sStack.pop();
            else if (s[i]!='#')
                sStack.push(s[i]);
        }
        
        for (int i=0; i<t.length(); i++)
        {
            if (t[i]=='#' and !tStack.empty())
                tStack.pop();
            else if (t[i]!='#')
                tStack.push(t[i]);
        }
        
        return (sStack==tStack);
        
    }
};
