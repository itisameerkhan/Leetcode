import java.util.*;

class Solution {
    public int lengthOfLastWord(String s) {
        
       s = s.trim();
        int lastIndex = s.lastIndexOf(' ') + 1;
        
        return s.length() - lastIndex;
    }
}
public class solution2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Solution sol = new Solution();
        System.out.println(sol.lengthOfLastWord(s));
    }
}