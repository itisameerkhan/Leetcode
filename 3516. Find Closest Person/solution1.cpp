#include<iostream>
#include<cmath>

class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a = abs(x-z);
        int b = abs(y-z);
        if(a==b) return 0;
        return a > b ? 2 : 1;
    }
};