#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void duplicateZeros(vector<int> &nums)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            if (result.size() >= nums.size())
                break;

            if (nums[i] == 0)
            {
                result.push_back(0);
                
                if (result.size() >= nums.size())
                break; 

                result.push_back(0);
            }
            else
            {
                result.push_back(nums[i]);
            }
        }
        for (int i = 0; i < result.size(); i++)
        {
            nums[i] = result[i];
        }
    }
};
int main()
{
    vector<int> nums = {8,4,5,0,0,0,0,7};
    Solution sol;
    sol.duplicateZeros(nums);
    for (auto i : nums)
        cout << i << " ";
}