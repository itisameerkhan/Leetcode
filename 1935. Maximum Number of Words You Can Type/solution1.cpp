#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int len = 0;
        for(int i=0;i<text.size();i++) {
            if(text[i] == ' ') len++;
            else if(i == text.size()-1) len++;
        }
        vector<int> words(len);
        int index=0;
        for(int i=0;i<brokenLetters.size();i++) {
            index = 0;
            for(int j=0;j<text.size();j++) {
                if(brokenLetters[i] == text[j]) words[index] = 1;
                if(text[j] == ' ') index++;
            }
        }
        int count=0;
        for(int i=0;i<len;i++) {
            if(words[i] == 0) count++;
        }
        return count;
    }
};
int main() {
    Solution s;
    string text = "leet code";
    string brokenLetters = "lt";
    cout<<s.canBeTypedWords(text, brokenLetters)<<endl;
    return 0;
}