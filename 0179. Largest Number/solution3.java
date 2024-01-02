import java.util.*;

class Solution {
    public static boolean compare(String a, String b) {
        return a.concat(b).compareTo(b.concat(a)) > 0;
    }
    public String largestNumber(int[] nums) {
        String[] words = new String[nums.length];
        for(int i=0;i<nums.length;i++) {
            words[i] = Integer.toString(nums[i]);
        }
        Arrays.sort(words, (a,b) -> {
            String str1 = a + b;
            String str2 = b + a;
            return str2.compareTo(str1);
        });
        StringBuilder result = new StringBuilder();
        int index=0;
        while(index < words.length && words[index].equals("0")) index++;
        while(index < words.length) {
            result.append(words[index]);
            index++;
        }
        if(result.toString().equals("")) return "0";
        return result.toString();
    }
}
public class solution3 {
    public static void main(String[] args) {
        int[] nums = {3,30,34,5,9};
        Solution sol = new Solution();
        System.out.println(sol.largestNumber(nums));
    }
}