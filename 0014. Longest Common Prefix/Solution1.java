import java.util.*;

class Solution {
    public String longestCommonPrefix(String[] strs) {
        
        if(strs.length==0)
            return "";
        
        String prefix = strs[0];
        for(int i=1;i<strs.length;i++)
        {
            while(strs[i].indexOf(prefix)!=0)
            {
                prefix = prefix.substring(0,prefix.length()-1);
            }
        }
        return prefix;
    }
}

public class Solution1 
{
    public static void main(String[] args)
    {
        String str[] = {"flower","flow","flight"};
        Solution sol =  new Solution();
        System.out.println(sol.longestCommonPrefix(str));
    }
}