#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkVectors(vector<int> s1, vector<int> s2) {
        for(int i=0;i<s1.size();i++) {
            if(s1[i] != s2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> freqS1(26,0);
        vector<int> freqS2(26,0);

        for(auto i: s1) freqS1[i-'a']++;
        int i=0,j=0;

        while(j < s2.size()) {
            freqS2[s2[j]-'a']++;
            if(j - i + 1 == s1.size()) {
                if(checkVectors(freqS1, freqS2)) return true;
            }

            if(j - i + 1 < s1.size()) j++;
            else {
                freqS2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};
int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    Solution sol;
    if(sol.checkInclusion(s1,s2)) cout<<"TRUE";
    else cout<<"FALSE";
}

/*
abc
abcabc
*/