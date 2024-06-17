import java.util.*;

class Solution {
    public boolean judgeSquareSum(int c) {
        for(int a=(int)Math.sqrt(c);a>=0;a--) {
            int b = (int)Math.floor(Math.sqrt(c - (a*a)));
            System.out.println(a*a + " " + b*b);
            if(a*a + b*b == c) return true;
        }
        return false;                                                                                                                                        
    }
}

public class solution1 {
    public static void main(String[] args) {
        int c = 3;
        Solution sol = new Solution();
        System.out.println(sol.judgeSquareSum(c));
    }
}