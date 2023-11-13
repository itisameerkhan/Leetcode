#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        vector<char> arr;
        string result = "";
        for(int i=0;i<s.size();i++) {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || 
               s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
               arr.push_back(s[i]);
        }
        int index = 0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<s.size();i++) {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || 
               s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                s[i] = arr[index++];
            }
        }
        return s;
    }
};

int main() 
{
    string s = "lEetcOde";
    Solution sol;
    cout<<sol.sortVowels(s);
}

/*
Runtime
Details
47ms
Beats 31.74% of users with C++

Memory
Details
12.42MB
Beats 66.18% of users with C++
*/