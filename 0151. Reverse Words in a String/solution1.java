import java.util.*;

class Solution {
    public String reverseWords(String s) {
        Stack<String> stack = new Stack<String>();
        String temp = "";
        String ans = "";
        s = s.trim();
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s.charAt(i)!=' ')
            temp = temp + s.charAt(i);
            else
            {
                stack.push(temp);
                temp = "";
                if(stack.peek()=="")
                stack.pop();
            }
        }
        stack.push(temp);
        while(stack.empty() != true)
        {
            ans += stack.peek();
            stack.pop();
            ans = ans + " ";
        }
        ans = ans.trim();
        return ans;
    }
}
public class solution1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Solution sol = new Solution();
        System.out.println(sol.reverseWords(s));
        sc.close();
    }
}