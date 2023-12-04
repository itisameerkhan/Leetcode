#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        int result = 0;
        string output = "";
        for(int i=0;i<num.size()-2;i++) {
            if(num[i] == num[i+1] && num[i+1] == num[i+2] && num[i+2] == num[i]) {
                string s = "";
                s += num[i];
                s += num[i+1];
                s += num[i+2];
                cout<<"s -> "<<s<<" index -> "<<i<<endl;
                int nums = stoi(s);
                if(nums >= result) {
                    result = nums;
                    output = s;
                }
            }
        }
        return output;
    }
};

int main() 
{
    string s = "2300019";
    Solution sol;
    cout<<sol.largestGoodInteger(s);
}