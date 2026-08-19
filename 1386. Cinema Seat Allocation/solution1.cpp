#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, string> map;
        for(int i=0;i<reservedSeats.size();i++) {
            if(reservedSeats[i][1] == 2 || reservedSeats[i][1] == 3 || reservedSeats[i][1] == 4 || reservedSeats[i][1] == 5) {
                if(map.find(reservedSeats[i][0]) == map.end()) map[reservedSeats[i][0]] = "111";
                map[reservedSeats[i][0]][0] = '0';
            }
            if(reservedSeats[i][1] == 4 || reservedSeats[i][1] == 5 || reservedSeats[i][1] == 6 || reservedSeats[i][1] == 7) {
                if(map.find(reservedSeats[i][0]) == map.end()) map[reservedSeats[i][0]] = "111";
                map[reservedSeats[i][0]][1] = '0';     
            }
            if(reservedSeats[i][1] == 6 || reservedSeats[i][1] == 7 || reservedSeats[i][1] == 8 || reservedSeats[i][1] == 9) {
                if(map.find(reservedSeats[i][0]) == map.end()) map[reservedSeats[i][0]] = "111";
                map[reservedSeats[i][0]][2] = '0';   
            }
        }
        int count=0;
        for(auto it: map) cout<<it.first<<" "<<it.second<<endl;
        for(auto it: map) {
            int flag=2;
            for(int i=0;i<3;i++) {
                if(flag==0) break;
                if(i==1 && ((it.second[i] == '0' && it.second[i+1] == '1'))) continue;
                if(i==1 && ((it.second[i] == '1' && it.second[i-1] == '1') || (it.second[i] == '1' && it.second[i+1] == '1') )) continue;
                if(it.second[i] == '1') {
                    flag--;
                }
                if(it.second[i] == '0') {
                    count++;
                    flag--;
                   }          
            }
        }
        // cout<<count<<endl;
        return (n*2)-count;
    }
}; 
int main() {
    Solution s;
    vector<vector<int>> reservedSeats = {{4,3},{1,4},{4,6},{1,7}};
    cout<<s.maxNumberOfFamilies(4, reservedSeats);
}