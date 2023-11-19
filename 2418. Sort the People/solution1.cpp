#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        for(int i=0;i<heights.size()-1;i++) {
            for(int j=0;j<heights.size()-i-1;j++) {
                if(heights[j] < heights[j+1]) {
                    int temp = heights[j];
                    heights[j] = heights[j+1];
                    heights[j+1] = temp;

                    string stringTemp = names[j];
                    names[j] = names[j+1];
                    names[j+1] = stringTemp;
                }
            }
        }
        return names;
    }
};
int main() 
{
    vector<string> names = {"Mary","John","Emma"};
    vector<int> heights = {180,165,170};
    Solution sol;
    vector<string> result = sol.sortPeople(names, heights);
    for(auto i: result) cout<<i<<" ";

}