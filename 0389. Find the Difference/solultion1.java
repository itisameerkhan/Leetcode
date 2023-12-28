class Solution {
    public char findTheDifference(String s, String t) {
       int n1 = s.length();
       int n2 = t.length();
       char[] c1 = s.toCharArray();
       char[] c2 = t.toCharArray();
       int x=0,y=0;
       char res;
       for(int i=0;i<n1;i++)
       {
           y = (char)c1[i];
           x = x^y;
       }
       for(int i=0;i<n2;i++)
       {
           y = (char)c2[i];
           x=x^y;
       }
       res = (char)x;
       return res;
    }
}
public class solultion1 {
    public static void main(String[] args) {
        String s = "abcd";
        String t = "abcde";
        Solution sol = new Solution();
        System.out.println(sol.findTheDifference(s, t));
    }
}
