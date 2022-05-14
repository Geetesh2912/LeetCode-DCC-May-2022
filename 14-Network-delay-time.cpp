//author: wrote the code inspired by leetcode discuss but didn't really understand the logic, marked for revisit
//question link: https://leetcode.com/problems/network-delay-time/
//submission link: https://leetcode.com/submissions/detail/699472650/

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        
        vector<pair<int,int>> g[n+1];
        
        for(int i=0;i<times.size();i++)
                g[times[i][0]].push_back({times[i][1],times[i][2]});
        
        vector<int> dist(n+1,INT_MAX);
        queue<int> q;
        q.push(k);
        dist[k]=0;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            for(pair<int,int> it:g[temp])
            {
                if(dist[it.first]>dist[temp]+it.second)
                {
                    dist[it.first]=dist[temp]+it.second;
                    q.push(it.first);
                }
            }
        }
        
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(dist[i]==INT_MAX)
                return -1;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};
