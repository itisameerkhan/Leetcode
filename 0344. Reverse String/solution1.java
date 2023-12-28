class Solution {
    public void reverseString(char[] s) {
        int start = 0;
        int end = s.length-1;
        while(start < end)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
}
public class solution1 {
    public static void main(String[] args) {
        char[] s = {'h','e','l','l','o'};
        Solution sol = new Solution();
        sol.reverseString(s);
        for(int i=0;i<s.length;i++) System.out.print(s[i] + " ");
    }
}