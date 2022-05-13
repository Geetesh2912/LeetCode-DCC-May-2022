//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/count-sorted-vowel-strings/
//submission link: https://leetcode.com/submissions/detail/697424774/


class Solution {
public:
    int countVowelStrings(int n) {
        // a = all strings starting with a
        // e = all strings starting with e
        // i = all strings starting with i
        // o = all strings starting with o
        // u = all strings starting with u
        int a=1,e=1,i=1,o=1,u=1;
        if (n==1)
            return a+e+i+o+u;
        
        while (n-1)
        {
            a=a+e+i+o+u;        //we can append a,e,i,o,u to a
            e=e+i+o+u;          //lly, we can append e,i,o,u to e not a
            i=i+o+u;
            o=o+u;
            u=u;
            n--;
        }
        
        return a+e+i+o+u;
    }
};

