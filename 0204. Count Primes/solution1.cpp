#include<bits/stdc++.h>
using namespace std;

//Sieve of Eratosthenes
class Solution {
public:
    int countPrimes(int n) {

        if(n<=2) return 0;

        vector<bool> isPrime(n, false);
        isPrime[2] = true;

        for(int i=3;i<n;i+=2) isPrime[i] = true;
        for(int i=3;i*i<n;i+=2) {
            if(isPrime[i]) {
                for(int j=i*i;j<n;j+=i*2) {
                    isPrime[j] = false;
                }
            }
        }
        int result=0;
        for(int i=0;i<isPrime.size();i++) {
            if(isPrime[i]) result++;
        } 
        return result;
    }
};

int main()
{
    int n = 100;
    Solution sol;
    cout<<sol.countPrimes(n);
}