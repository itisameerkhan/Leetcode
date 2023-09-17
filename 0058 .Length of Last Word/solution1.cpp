#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,flag=1;
        int len = size(s)-1;
        while(flag)
        {
            if(s[len]==' ')
            {
                len--;
            }
            else
            {
                flag=0;
            }
        }
        for(int i=0;i<=len;i++)
        {
            if(s[i]==' ')
                count=0;
            else 
                count++;
        }
        return count;
        
    }
};
int main()
{
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.lengthOfLastWord(s);
}