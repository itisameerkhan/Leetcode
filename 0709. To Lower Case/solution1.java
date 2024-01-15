class Solution {
    public String toLowerCase(String s) {
        String res = "";
        for(int i=0;i<s.length();i++)
        res += Character.toLowerCase(s.charAt(i));

        return res;
    }
}

public class solution1 {
    public static void main(String[] args) {
        String s = "Hello";
        Solution sol = new Solution();
        System.out.println(sol.toLowerCase(s));
    }
}
