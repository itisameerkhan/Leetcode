#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int product(int n) {
        int result = 1;
        while(n > 0) {
            result = result * (n%10);
            n/=10;
        }
        return result;
    }
    int sum(int n) {
        int result = 0;
        while(n > 0) {
            result = result + (n%10);
            n/=10;
        }
        return result;
    }
    bool checkDivisibility(int n) {
        if(n/10 == 0) return 0;
        return n % (product(n) + sum(n)) == 0 ? 1 : 0;
    }
};
int main() {
    Solution s;
    int n = 99;
    cout<<s.checkDivisibility(n);
}