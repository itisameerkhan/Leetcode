#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string result = "";
        int flag = 1;
        int i=0,j=0;
        for(int index=0;index<word1.size()+word2.size();index++)
        {
            if(flag==1 && i == word1.size()) result += word2[j++];
            else if(flag==0 && j==word2.size()) result += word1[i++];
            else if(flag==1) result += word1[i++];
            else if(flag==0) result += word2[j++];
            flag = !flag;
        }
        return result;
    }
};

int main()
{
    string word1 = "ab";
    string word2 = "pqrs";
    Solution sol;
    cout<<sol.mergeAlternately(word1,word2);
}