import java.util.*;

class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        List <Integer> result = new ArrayList<>();
        for(int i=1;i<=9;i++) {
            int num = i;
            int nextDigit = i + 1;
            while(num <= high && nextDigit <= 9) {
                num = num*10 + nextDigit;
                nextDigit++;
                if(low <= num && num<=high) result.add(num);
            }
        }
        Collections.sort(result);
        return result;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int low=100, high=300;
        Solution sol = new Solution();
        List<Integer> result = sol.sequentialDigits(low, high);
        for(Integer i: result) System.out.print(i + " ");
    }
}