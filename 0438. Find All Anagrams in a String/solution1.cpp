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
    vector<int> findAnagrams(string s1, string s2) {
        vector<int> freqS1(26,0);
        vector<int> freqS2(26,0);
        vector<int> result;

        for(auto i: s2) freqS2[i-'a']++;

        int i=0,j=0;

        while(j<s1.size()) 
        {
            freqS1[s1[j]-'a']++;

            if(j-i+1 == s2.size()) {
                if(checkVectors(freqS1, freqS2)) {
                    result.push_back(i);
                }
            }

            if(j-i+1 < s2.size()) j++;
            else {
                freqS1[s1[i]-'a']--;
                i++;
                j++;
            }
        }
        return result;
    }
};
int main()
{
    string s = "cbaebabacd";
    string p = "abc";
    Solution sol;
    vector<int> result = sol.findAnagrams(s,p);
    for(auto i: result) cout<<i<<" ";
}