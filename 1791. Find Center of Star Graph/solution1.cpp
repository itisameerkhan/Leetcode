#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) 
    {
        if(edges[0][0] == edges[1][0] || edges[0][0]==edges[1][1])
        return edges[0][0];
        return edges[0][1];
    }
};

int main()
{
    vector<vector<int>> edges = {{1,2}, {2,3}, {4,2}};
    Solution sol;
    cout<<sol.findCenter(edges);
}