#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void duplicateZeros(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                nums.insert(nums.begin() + i, 0);
                i++;
            }
        }
        nums.resize(n);
    }
};
int main()
{
    vector<int> nums = {8, 4, 5, 0, 0, 0, 0, 7};
    Solution sol;
    sol.duplicateZeros(nums);
    for (auto i : nums)
        cout << i << " ";
}