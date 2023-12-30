class Solution {
    public int fib(int n) {
        if(n==0 || n==1) return n;
        return fib(n-1) + fib(n-2);
    }
}
public class solution1 {
    public static void main(String[] args) {
        int n=2;
        Solution sol = new Solution();
        System.out.println(sol.fib(n));
    }
}