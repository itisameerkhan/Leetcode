#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int romantoInt(string s)
    {
        unordered_map<char,int> roman
        {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int integer=0;
        for(int i=0;i<s.size();i++)
        {
            if(roman[s[i]] < roman[s[i+1]])
            {
                integer -= roman[s[i]];
            }
            else  
            {
                integer += roman[s[i]];
            }
        }
        return integer;
    }
};
int main()
{
    Solution sol;
    cout<<sol.romantoInt("MCMXCIV");
}