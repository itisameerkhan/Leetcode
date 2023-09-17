#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";
        int start,end;
        for(int i=0;i<size(s);i++)
        {                        
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                x += tolower(s[i]);
            }
        }
        start = 0;
        end = size(x)-1;
        while(start<end)
        {
            if(x[start]!=x[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
int main()
{
    string s = "A man, a plan, a canal: Panama";
    Solution sol;
    if(sol.isPalindrome(s)) cout<<"TRUE";
    else cout<<"FALSE";
}