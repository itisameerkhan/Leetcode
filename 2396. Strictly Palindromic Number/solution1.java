class Solution {
    public int calculateBase(int n, int base) {
        int result = 0,place=1;
        while(n > 0) {
            int digit = n%base;
            result = result +  digit * place;
            n/=base;
            place *= 10;
        }
        return result;
    }
    public boolean isPalindrome(int n) {
        int reverse=0;
        int temp = n;
        while(temp > 0) {
            reverse = reverse * 10 + temp % 10;
            temp/=10;
        }
        return reverse == n;
    }
    public boolean isStrictlyPalindromic(int n) {
        int base = 2;
        while(base <= n-2) {
            int num = calculateBase(n, base);
            if(!isPalindrome(num)) return false;
            base++;
        }
        return true;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int n = 9;
        Solution sol = new Solution();
        if(sol.isStrictlyPalindromic(n)) System.out.println("true");
        else System.out.println("false");
    }
}