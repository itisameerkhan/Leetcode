#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<char> str;
        int output=0;
        for(int i=0;i<s.size();i++)
        {
            auto index = find(str.begin(),str.end(),s[i]); //find the input character in str
            if(index != str.end())  // if found then erase the element from the beginning upto the found value'th index
            {
                int ind = distance(str.begin(),index);
                str.erase(str.begin(),str.begin()+ind+1);
            }
            str.push_back(s[i]); // or push back the current character
            if(str.size() > output) output = str.size(); // check for maximum length
        }
        return output;
    }
};
int main()
{
    string s = "abcabc";
    Solution sol;
    cout<<sol.lengthOfLongestSubstring(s);
}