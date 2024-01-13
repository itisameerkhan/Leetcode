import java.util.*;

class Solution {
    public int minSteps(String s, String t) {
        int count=0;
        int[] freq = new int[26];
        Arrays.fill(freq, 0);
        for(int i=0;i<s.length();i++) {
            freq[s.charAt(i) - 'a']++;
            freq[t.charAt(i) - 'a']--;
        }
        for(int i=0;i<26;i++) {
            count += Math.max(0, freq[i]);
        }
        return count;
    }
}
public class solution2 { 
    public static void main(String[] args) {
        String s = "leetcode";
        String t = "practice";
        Solution sol = new Solution();
        System.out.println(sol.minSteps(s, t));
    }
}