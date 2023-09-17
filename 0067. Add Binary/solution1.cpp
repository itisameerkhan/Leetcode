#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string addBinary(string a,string b)
    {
        char carry = '0';
        string answer = "";
        if(a.size() >= b.size())
        {
            string temp = "";
            for(int i=0;i<a.size()-b.size();i++)
            {
                temp += '0';
            }
            b = temp + b;
        }
        else  
        {
            string temp = "";
            for(int i=0;i<b.size()-a.size();i++)
            {
                temp += '0';
            }
            a = temp + a;
        }
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]=='1' && b[i]=='1')
            {
                if(carry == '0')
                {
                    carry = '1';
                    answer = '0' + answer;
                }
                else  
                {
                    answer = '1' + answer;
                }
            }
            else if(a[i]=='0' && b[i]=='0')
            {
                if(carry=='0')
                {
                    answer = '0' + answer;
                }
                else  
                {
                    carry = '0';
                    answer = '1' + answer;
                }
            }
            else  
            {
                if(carry=='0')
                {
                    answer = '1' + answer;
                }
                else  
                {
                    answer = '0' + answer;
                }
            }
        }
        if(carry == '1')
        {
            answer = carry + answer;
        }
        return answer;
    }
};
int main()
{
    string a,b;
    cin>>a>>b;
    Solution sol;
    cout<<sol.addBinary(a,b);
}