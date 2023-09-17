#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    int strStr(string s,string h)
    {
        int index=-1;
        int ind1=-1,ind2=0;
        for(int i=0;i<s.size();i++)
        {
            index=i;
            ind1=i;
            if(s[i]==h[ind2])
            {
                while(s[ind1]==h[ind2])
                {
                    if(ind2>=h.size()) break;
                    ind1++;
                    ind2++;
                }
            }
            if(ind2>=h.size()) break;
            else 
            {
                ind2=0;
                index=-1;
            }
        }
        return index;
    }
};
int main()
{
    string s,h;
    cin>>s>>h;
    Solution sol;
    cout<<sol.strStr(s,h);
}