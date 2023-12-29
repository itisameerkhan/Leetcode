//Sieve of Eratosthenes

class Solution {
    public int countPrimes(int n) {
        if(n <= 2) return 0;

        boolean[] isPrime = new boolean[n];
        isPrime[2] = true;

        for(int i=3; i<n; i+=2) isPrime[i] = true;
        for(int i=3; i*i<n; i+=2) {
            if(isPrime[i]) {
                for(int j=i*i; j<n; j+=2*i) {
                    isPrime[j] = false;
                }
            }
        } 
        int count=0;
        for(int i=0;i<isPrime.length;i++) {
            if(isPrime[i]) count++;
        }
        return count;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int n = 100;
        Solution sol = new Solution();
        System.out.println(sol.countPrimes(n));
    }
}

