//author: Geetesh Mandaogade
//question link: https://leetcode.com/explore/item/1126
//submission link: https://leetcode.com/submissions/detail/699400243/?from=explore&item_id=1126

class Solution {
public:
    bool rowCheck(vector<vector<char>> & board)
    {   
        for (int i=0; i<board.size(); i++)
        {
            unordered_map<char, int> mp;
            for (int j=0; j<board[0].size(); j++)
            {
                if (board[i][j]=='.')
                    continue;
                
                if (mp.find(board[i][j])!=mp.end())
                    return false;
                
                mp[board[i][j]]++;
            }
        }
        return true;
    }
    
    bool colCheck(vector<vector<char>> & board)
    {
        for (int i=0; i<board[0].size(); i++)
        {
            unordered_map<char, int> mp;
            for (int j=0; j<board.size(); j++)
            {
                if (board[j][i]=='.')
                    continue;
                
                if (mp.find(board[j][i])!=mp.end())
                    return false;
                
                mp[board[j][i]]++;
            }
        }
        return true;
    }
    
    bool boxCheck(vector<vector<char>> & board)
    {
        for (int i=0; i<=2; i++)
        {
            for (int j=0; j<=2; j++)
            {
                unordered_map<char, int> mp;
                for (int k= i*3; k<(i+1)*3; k++)
                {
                    for (int l= j*3; l<(j+1)*3; l++)
                    {
                        if (board[k][l]=='.')
                            continue;
                        
                        if (mp.find(board[k][l])!=mp.end())
                            return false;
                        
                        mp[board[k][l]]++;
                    }
                }
            }
        }
        return true;
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        //cout<<rowCheck(board)<<" "<<colCheck(board)<<" "<<boxCheck(board);
        return (rowCheck(board) and colCheck(board) and boxCheck(board));
    }
};
