#include<bits/stdc++.h>
using namespace std;

class Solution { //NOT RECOMMENDED
public:
    void sortColors(vector<int>& nums) {
        multiset<int> s;
        for(auto i: nums)
        s.insert(i);
        nums.clear();
        for(auto i: s)
        nums.push_back(i);
    }
};

int main() {

}