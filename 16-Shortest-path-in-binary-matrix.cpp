//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/shortest-path-in-binary-matrix/
//submission link: https://leetcode.com/submissions/detail/700909714/

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n= grid.size();
        if ( grid[0][0]!=0 or grid[n-1][n-1]!=0 )   //if the top left and bottom right cells aren't 0 no possible path can be generated
            return -1;
        
        int count=1;    //starting count from 1 because we need the count of elements not the edges, ex: in example 1 0->0 is 1 edge but expected o/p asks for nodes so ans is 2
        
        //now applying breadth first search
        queue<pair<int,int>> q;
        q.push(make_pair(0,0));
        vector<vector<int>> adjacents = {{1,1}, {0,1}, {1,0}, {0,-1}, {-1,0}, {-1,-1}, {1,-1}, {-1,1}};
        
        grid[0][0]=1;
        while (q.empty()==false)
        {
            auto curr=q.front();
            q.pop();
            int x=curr.first, y=curr.second;
            if (x==grid.size()-1 and y==grid[0].size()-1)
                return grid[x][y];
            //check all 8 adjacents
            for (auto adj: adjacents)
            {
                int nx=x+adj[0];
                int ny=y+adj[1];
                if (nx>=0 and ny>=0 and nx<grid.size() and ny<grid[0].size() and grid[nx][ny]==0)
                {
                    q.push(make_pair(nx,ny));
                    grid[nx][ny]=grid[x][y]+1;
                }
            }
        }
        return -1;
    }
};
