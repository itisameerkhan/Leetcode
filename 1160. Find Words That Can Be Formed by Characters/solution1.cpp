#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool findWords(string word, string chars) {
        int result = 0;
        for(int i=0;i<word.size();i++) {
            for(int j=0;j<chars.size();j++) {
                if(word[i] == chars[j]) {
                    chars[j] = '$';
                    result++;
                    break;
                }
            }
        }
        // cout<<result<<endl;
        return result == word.size();
    }
    int countCharacters(vector<string>& words, string chars) {
        int result = 0;
        for(int i=0;i<words.size();i++) {
            if(findWords(words[i],chars)) result += words[i].size();
        }
        return result;
    }
};

int main() 
{
    vector<string> words = {"cat","bt","hat","tree"};
    string chars = "atach";
    Solution sol;
    cout<<sol.countCharacters(words,chars);
}

/*
Runtime
159
ms
Beats
26.19%
of users with C++

Memory
20.45
MB
Beats
73.81%
of users with C++
*/