#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> m;
        string a = "qwertyuiopQWERTYUIOP";
        for(char i: a)
        m[i] = 1;
        a = "asdfghjklASDFGHJKL";
        for(char i: a)
        m[i]=2;
        a = "zxcvbnmZXCVBNM";
        for(char i: a)
        m[i]=3;
        vector<string> v;
        for(string word: words)
        {
            bool samerow = true;
            for(int i=0;i<word.length();i++)
            {
                if(m[word[i]]!=m[word[0]])
                {
                    samerow = false;
                    break;
                }
            }
            if(samerow) 
            v.push_back(word);
        }
        return v;
    }
};
int main()
{
    vector<string> words = {"Hello","Alaska","Dad","Peace"};
    Solution sol;
    vector<string> result = sol.findWords(words);
    for(auto i: result) cout<<i<<" ";
}