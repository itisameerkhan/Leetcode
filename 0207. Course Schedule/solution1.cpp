#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool DFS(int i,vector<int> adj[],vector<int> &vis,vector<int> &dfsv,int V)
    {
        vis[i] = 1;
        dfsv[i] = 1;
        for(auto it: adj[i])
        {
            if(vis[it]==0)
            {
                bool ans = DFS(it,adj,vis,dfsv,V);
                if(ans==true) return true;
            }
            else if(dfsv[it]) return true;
        }
        dfsv[i]=0;
        return false;
    }
    bool canFinish(int V, vector<vector<int>>& prerequisites) 
    {
        vector<int> adj[V];
        for(int i=0;i<prerequisites.size();i++)
        {
            if(prerequisites[i].size()==0) continue;
            int a = prerequisites[i][1];
            int b = prerequisites[i][0];
            adj[a].push_back(b);
        }
        vector<int> vis(V,0);
        vector<int> dfsv(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                bool ans = DFS(i,adj,vis,dfsv,V);
                if(ans) return false;
            }
        }
        return true;
    }
};
int main()
{
    int V=4;
    vector<vector<int>> prerequisites(V);

    // prerequisites[0].push_back(0);
	// prerequisites[0].push_back(1);

	// prerequisites[1].push_back(1);
	// prerequisites[1].push_back(2);

	// prerequisites[2].push_back(2);
	// prerequisites[2].push_back(3);

    prerequisites[0].push_back(0);
    prerequisites[0].push_back(1);

    prerequisites[1].push_back(1);
    prerequisites[1].push_back(2);

    prerequisites[2].push_back(2);
    prerequisites[2].push_back(3);

    prerequisites[3].push_back(3);
    prerequisites[3].push_back(0);



    Solution s;
    bool ans = s.canFinish(V,prerequisites);
    if(ans) cout<<"TRUE";
    else cout<<"FALSE";
}