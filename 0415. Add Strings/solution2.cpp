#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    std::string addStrings(std::string num1, std::string num2) {
        std::string res;
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        while (i >= 0 || j >= 0) {
            int sum = carry;
            if (i >= 0) {
                sum += num1[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += num2[j] - '0';
                j--;
            }
            res += (sum % 10) + '0';
            carry = sum / 10;
        }
        if (carry > 0) {
            res += (carry % 10) + '0';
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};
int main()
{
    string num1 = "11";
    string num2 = "123";
    Solution sol;
    cout<<sol.addStrings(num1,num2);
}