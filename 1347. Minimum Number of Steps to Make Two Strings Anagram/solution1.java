import java.util.*;

class Solution {
    public int minSteps(String s, String t) {
        int count=0;
        int[] freq = new int[26];
        Arrays.fill(freq, 0);
        for(int i=0;i<t.length();i++) freq[t.charAt(i) - 'a']++;
        for(int i=0;i<s.length();i++) {
            if(freq[s.charAt(i) - 'a'] > 0) freq[s.charAt(i)-'a']--;
            else if(freq[s.charAt(i) - 'a'] == 0) count++; 
        }
        return count;
    }
}
public class solution1 { 
    public static void main(String[] args) {
        String s = "leetcode";
        String t = "practice";
        Solution sol = new Solution();
        System.out.println(sol.minSteps(s, t));
    }
}