#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice=0, bob=0, p=2;
        vector<int> piles_weight(piles.size(), 0);
        for(int i=0;i<piles.size();i++) {
            if(i == (piles.size() / 2) - 1) {
                piles_weight[i] = piles[i] - piles[i+1];
            }
            else if(i == piles.size() / 2) {
                piles_weight[i] = piles[i] - piles[i-1];
                p = 0;
            }
            else {
                piles_weight[i] = piles[i] - piles[piles.size() - i - p];
            }
        }
        int index=0;
        while(index < piles.size() / 2) {
            if(piles_weight[index] > piles_weight[piles_weight.size() - index - 1]) {
                alice += piles[index];
                bob += piles[piles.size() - index - 1];
            } else {
                alice += piles[piles.size() - index - 1];
                bob += piles[index];        
            }
            index++;
        }
        if(alice > bob) return true;
        return false;
    }
};

int main() {
    vector<int> piles = {3,7,2,3};
    Solution s;
    cout<<s.stoneGame(piles);
}