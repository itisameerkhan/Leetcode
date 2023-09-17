import java.util.*;

class Solution {
    public int lengthOfLastWord(String s) {
        
     String str = s.trim();
        int len=0;
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)== ' ')
                len=0;
            else
                len++;
        }
        return len;
    }
}
public class solution1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Solution sol = new Solution();
        System.out.println(sol.lengthOfLastWord(s));
    }
}