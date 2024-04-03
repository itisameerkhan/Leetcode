#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool selfDivide(int num)
    {
        int temp = num;
        while (temp)
        {
            int digit = temp % 10;
            temp /= 10;
            if(digit == 0) return false;
            if (num % digit != 0)
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> result;
        for (int i = left; i <= right; i++)
        {
            if (selfDivide(i))
            {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main()
{
    int left = 1;
    int right = 22;
    Solution sol;
    vector<int> result = sol.selfDividingNumbers(left, right);
    for (auto i : result)
        cout << i << " ";
}