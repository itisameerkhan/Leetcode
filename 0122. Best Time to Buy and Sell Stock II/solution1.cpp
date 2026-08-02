#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=0;i<prices.size()-1;i++) {
            int trade = prices[i+1] - prices[i];
            if(trade > 0) profit += trade;
        }
        return profit;
    }
};