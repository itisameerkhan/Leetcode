import java.util.*;

class Solution 
{
    public String decodeMessage(String key,String message)
    {
        List<Character> list = new ArrayList<Character>(Collections.nCopies(26, '0'));
        String result = "";
        int index = 0;
        for(int i=0;i<key.length();i++)
        {
            if(key.charAt(i) != ' ')
            {
                if(list.contains(key.charAt(i)) == false)
                {
                    list.add(index++, key.charAt(i));
                } 
            }
        }
        for(int i=0;i<message.length();i++)
        {
            int listIndex = list.indexOf(message.charAt(i));
            char ch = (char)(listIndex + 97);
            if(Character.isAlphabetic(ch)) result += ch;
            else result += ' ';
        }
        return result;
    }
}
public class solution1 
{
    public static void main(String[] args)
    {
        String key = "the quick brown fox jumps over the lazy dog";
        String message = "vkbs bs t suepuv";
        Solution sol = new Solution();
        System.out.println(sol.decodeMessage(key, message));
    }
}