#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int check_multiple(int n){
        int result=1;
        while(n>0) {
            result = result * (n%10);
            n/=10;
        }
        return result;
    }
    int smallestNumber(int n, int t) {
        while(n) {
            int result = check_multiple(n);
            if(result % t == 0) return n;
            n++;
        }
        return 0;
    }
};

int main() {
    Solution s;
    cout<<s.smallestNumber(15,3);
}