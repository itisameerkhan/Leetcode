#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int product(int n) {
        if(n==0) return 1;
        return (n % 10) * product(n/10);
    }
    int sum(int n) {
        if(n==0) return 0;
        return (n % 10) + sum(n/10);
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