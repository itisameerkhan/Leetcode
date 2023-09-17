#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution
{
    public:
    bool check(int start,vector<vector<int>> &adj,int color[])
    {
        queue<int> q;
        q.push(start);
        color[start]=0;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto it: adj[node])
            {
                if(color[it]==-1)
                {
                    color[it] = !color[node];
                    q.push(it);
                }
                else if(color[it] == color[node]) return false;
            }
        }
        return true;
    }
   
    bool checkBiPartite(int V,vector<vector<int>> &adj)
    {
        int color[V];
        for(int i=0;i<V;i++) color[i]=-1;
       
        for(int i=0;i<V;i++)
        {
            if(color[i]==-1)
            {
                if(check(i,adj,color)==false) return false;
            }
        }
        return true;
    }
};
void addEdge(vector<vector<int>> &adj,int u,int v)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}
int main()
{
    int E=4,V=4;

    vector<vector<int>> adj(V);
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,0,3);
    addEdge(adj,1,2);
    addEdge(adj,2,3);

    // for(auto i: adj)
    // {
    //     for(auto j: i) 
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    Solution s;
    bool ans = s.checkBiPartite(V,adj);
    if(ans) cout<<"TRUE";
    else cout<<"FALSE";
   
}
