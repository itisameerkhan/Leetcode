#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];

        for(int i=2;i<coordinates.size();i++)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            if((x - x0) * (y1 - y0) != (y - y0) * (x1 - x0))
            return false;
        }
        return true;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> coordinates;
    for(int i=0;i<n;i++) 
    {
        int x,y;
        cin>>x>>y;
        coordinates.push_back({x,y});
    }
    Solution sol;
    if(sol.checkStraightLine(coordinates)) cout<<"TRUE";
    else cout<<"FALSE";
}
