//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/palindromic-substrings/
//submission link: https://leetcode.com/submissions/detail/705017409/

class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length(); 
        int count = n;          //each letter is palindrome individually, ex: abc has a, b, c 3 palindromes for sure              
        
        for(int i=1, l=0, r=2; i<n; i++, l=i-1, r=i+1)  //for odd n
        {
            while(l>=0 and r<n and s[l]==s[r])  
            {
                l--; 
                r++;
                count++;
            }
        }    
        
        for(int i=1, l=0, r=1; i<n; i++, l=i-1, r=i)   //for even  n
        {
            while(l>=0 and r<n and s[l]==s[r]) 
            {
                l--;
                r++;
                count++;
            }
        }            
        return count;
    }
};
