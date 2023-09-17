class Solution {
    public int reverse(int x) {
        
         boolean isNegative = false;
        if (x < 0) {
            isNegative = true;
            x = -x;
        }
        long reverse = 0;
        while (x > 0) {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
        if (reverse > Integer.MAX_VALUE) {
            return 0;
        }
        return (int) (isNegative ? -reverse : reverse);
    }
}
public class solution1 
{
    public static void main(String[] args)
    {
        Solution sol = new Solution();
        System.out.println(sol.reverse(123));
    }
}