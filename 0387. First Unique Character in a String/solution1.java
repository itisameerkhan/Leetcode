import java.util.*;

class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        for(int i=0;i<s.length();i++) {
            char c = s.charAt(i);
            map.put(c, map.getOrDefault(c, 0) + 1);
        }       
        for(int i=0;i<s.length();i++) {
            char c = s.charAt(i);
            if(map.get(c) == 1) return i;
        }
        return -1;
    }
}

public class solution1 {
    public static void main(String[] args) {
        String s = "leetcode";
        Solution sol = new Solution();
        System.out.println(sol.firstUniqChar(s));
    }
}