#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>> output(n);
        for(int i=0;i<output.size();i++) output[i].resize(i+1,1);
        if(n==1) return output;

        n = n-2;
        int currentIndex = 2;

        while(n--)
        {
            int previous = 0;
            int current = 0;
            for(int i=0;i<output[currentIndex].size()-1;i++)
            {
                current = output[currentIndex-1][i];
                output[currentIndex][i] = current + previous;
                previous = current;
            }
            currentIndex++;
        }
        return output;
    }
};
int main()
{
    int n=4;
    Solution sol;
    vector<vector<int>> ans = sol.generate(n);
    for(auto i: ans)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
