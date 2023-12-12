#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "",s2="";
        for(int i=0;i<word1.size();i++) s1 += word1[i];
        for(int i=0;i<word2.size();i++) s2 += word2[i];
        return s1 == s2;
    }
};
int main()
{
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};
    Solution sol;
    if(sol.arrayStringsAreEqual(word1,word2)) cout<<"TRUE";
    else cout<<"FALSE";
}