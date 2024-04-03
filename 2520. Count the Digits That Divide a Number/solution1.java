import java.util.*;

class Solution {
    public int countDigits(int num) {
        int temp = num;
        int result = 0;
        while(temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            if(num % digit == 0) {
                result++;
            }
        }
        return result;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int num = 121;
        Solution sol = new Solution();
        System.out.println(sol.countDigits(num));
    }
}