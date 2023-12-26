#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkDictionary(string s, string t) {
        int index1=0,index2=0;
        while(index1 < s.size() && index2 < t.size()) {
            if(s[index1] == t[index2]) {
                index2++;
            }
            index1++;
        }
        return index2 == t.size();
    }
    string findLongestWord(string s, vector<string>& dictionary) {

        string result = "";
        for(int i=0;i<dictionary.size();i++) {
            if(checkDictionary(s, dictionary[i])) {
                if(dictionary[i].size() > result.size() || (dictionary[i].size() == result.size() && dictionary[i] < result))
                result = dictionary[i];
            }
        }
        return result;
    }
};

int main()
{
    string s = "aaa";
    vector<string> dictionary = {"aaa", "aa", "a"};
    Solution sol;
    cout<<sol.findLongestWord(s, dictionary);
}