#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double ans = 0;
        int t=0;
        for(int i=1;i<salary.size()-1;i++)
        {
            ans = ans + salary[i];
            t++;
        }
        return ans/t;
    }
};
int main()
{
    vector<int> salary = {1000, 2000, 3000};
    Solution sol;
    cout<<sol.average(salary);
}