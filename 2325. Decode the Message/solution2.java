import java.util.*;

class Solution {
    public String decodeMessage(String key, String message) {
        StringBuilder result = new StringBuilder();

        HashMap<Character,Character> map = new HashMap<>();
        key = key.replace(" ","");
        
        char ch = 'a';
        for(char i : key.toCharArray())
        {
            if(!map.containsKey(i))
            {
                map.put(i, ch++);
            }
        }
        for(char i: message.toCharArray())
        {
            if(map.containsKey(i))
            {
                result.append(map.get(i));
            }
            else 
            {
                result.append(i);
            }
        }
        return result.toString();
    }
}
public class solution2 
{
    public static void main(String[] args)
    {
        String key = "the quick brown fox jumps over the lazy dog";
        String message = "vkbs bs t suepuv";
        Solution sol = new Solution();
        System.out.println(sol.decodeMessage(key, message));
    }
}