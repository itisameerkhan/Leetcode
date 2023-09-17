#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int player1Total = 0;
        int player2Total = 0;
        int bonus = 1;
        int count = 2;
        for(int i=0;i<player1.size();i++)
        {
            if(player1[i]==10)
            {
                player1Total += player1[i]*bonus;
                bonus = 2;
                count = 3;
            }
            else 
            {
                player1Total += player1[i]*bonus;
            }
            count--;
            if(count==0) bonus = 1;
        }
        bonus = 1;
        count = 2;
        for(int i=0;i<player2.size();i++)
        {
            if(player2[i]==10)
            {
                player2Total += player2[i]*bonus;
                bonus = 2;
                count = 3;
            }
            else 
            {
                player2Total += player2[i]*bonus;
            }
            count--;
            if(count==0) bonus = 1;
        }
        // cout<<player1Total<<" "<<player2Total<<endl;
        if(player1Total > player2Total) return 1;
        else if(player1Total < player2Total) return 2;
        return 0;
    }
};
int main()
{
    vector<int> player1 = {9,7,10,7};
    vector<int> player2 = {10,2,4,10};
    Solution sol;
    cout<<sol.isWinner(player1,player2);
}