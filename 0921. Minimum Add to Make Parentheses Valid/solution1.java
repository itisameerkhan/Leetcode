import java.util.*;

class Solution {
    public int minAddToMakeValid(String s) {
        Stack<Character> stack = new Stack<>();
        for(int i=0;i<s.length();i++) {
            if(s.charAt(i) == '(') {
                stack.push(s.charAt(i));
            } else {
                if(!stack.empty() && stack.peek() == '(') stack.pop();
                else stack.push(s.charAt(i));
            }
        }
        return stack.size();
    }
}
public class solution1 {
    public static void main(String[] args) {
        String s = "()))((";
        Solution sol = new Solution();
        System.out.println(sol.minAddToMakeValid(s));      
    }
}
