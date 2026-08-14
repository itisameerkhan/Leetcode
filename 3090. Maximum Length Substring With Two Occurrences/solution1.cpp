#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0,right=0, result=0;
        unordered_map<char, int> map;
        for(right=0;right<s.size();right++) {
            map[s[right]]++;
            while(map[s[right]] > 2) {
                map[s[left]]--;
                left++;
            }
            result = max(result, right - left + 1);
        }
        return result;
    }
};

int main() {
    Solution s;
    string str = "eebadadbfa";
    cout<<s.maximumLengthSubstring(str);
}