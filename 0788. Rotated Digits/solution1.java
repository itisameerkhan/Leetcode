import java.util.*;

class Solution {
    public boolean validateRotation(int n) {
        int[] freq = new int[10];
        Arrays.fill(freq, 0);
        while(n > 0) {
            int digit=n%10;
            freq[digit] = 1;
            n/=10;
        }
        boolean valid = false;
        if(freq[2]==1 || freq[5]==1 || freq[6]==1 || freq[9]==1) valid = true;
        if(freq[3]==1 || freq[4]==1 || freq[7]==1) valid = false;
        return valid;
    }
    public int rotatedDigits(int n) {
        int index = 1, result=0;
        while(index <= n) {
            if(validateRotation(index)) result++;
            index++;
        }
        return result;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int n = 857;
        Solution sol = new Solution();
        System.out.println(sol.rotatedDigits(n));
    }
}