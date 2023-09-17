#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    string decodeMessage(string key,string message)
    {
        vector<char> letters(26,'0');
        int index=0;
        string result = "";
        for(int i=0;i<key.size();i++)
        {
            if(key[i] != ' ')
            {
                if(find(letters.begin(),letters.end(),key[i]) == letters.end())
                {
                    letters[index++] = key[i];  
                } 
            }
        }
        for(int i=0;i<message.size();i++)
        {
            auto iterator = find(letters.begin(),letters.end(),message[i]);
            auto index = distance(letters.begin(),iterator);
            char ch = (char)index + 'a';
            if(ch == '{') result += " ";
            else result += ch;
        }
        return result;
    }
};
int main()
{
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    Solution sol;
    cout<<sol.decodeMessage(key,message);
}