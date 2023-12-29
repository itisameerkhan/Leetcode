import java.util.*;

class Solution {
    public int myAtoi(String s) {
        int result = 0, index=0;
        s = s.trim();
        if(s.length() == 0) return 0;
        boolean isPositive = s.charAt(0) == '+';
        boolean isNegative = s.charAt(0) == '-';

        if(isPositive || isNegative) index++;

        while(index < s.length() && Character.isDigit(s.charAt(index))) {
            int digit = s.charAt(index) - '0';
            // System.out.println("digit -> " + digit + " result -> " + result);
            if(result > Integer.MAX_VALUE / 10 || (result == Integer.MAX_VALUE/10 && digit > Integer.MAX_VALUE % 10)) return isNegative ? Integer.MIN_VALUE : Integer.MAX_VALUE;
            result = result * 10 + digit; 
            index++;
        }
        return isNegative ? -result : result;
    }
}
public class solution1 {
    public static void main(String[] args) {
        String s = "2147483648";
        Solution sol = new Solution();
        // sol.myAtoi(s);
        System.out.println(sol.myAtoi(s));
    }
}

/*
 * "    -42"
 * "-42"
 * 
 * 
 */