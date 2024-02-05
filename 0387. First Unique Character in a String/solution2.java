import java.util.*;

class Solution {
    public int firstUniqChar(String s) {       
        for(int i=0;i<s.length();i++) {
            char c = s.charAt(i);
            int firstIndex = s.indexOf(c);
            int lastIndex = s.lastIndexOf(c);
            if(firstIndex == lastIndex) return i;
        }
        return -1;
    }
}

public class solution2 {
    public static void main(String[] args) {
        String s = "leetcode";
        Solution sol = new Solution();
        System.out.println(sol.firstUniqChar(s));
    }
}