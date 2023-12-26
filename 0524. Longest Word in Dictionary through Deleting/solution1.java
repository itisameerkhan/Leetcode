import java.util.*;

class Solution {
    public boolean checkDictionary(String s, String t) {
        int index1=0,index2=0;
        while(index1 < s.length() && index2 < t.length()) {
            if(s.charAt(index1) == t.charAt(index2)) index2++;
            index1++;
        }
        return t.length() == index2;
    }
    public String findLongestWord(String s, List<String> dictionary) {
        String result = "";
        for(int i=0;i<dictionary.size();i++) {
            if(checkDictionary(s, dictionary.get(i))) {
                if(dictionary.get(i).length() > result.length() || 
                dictionary.get(i).length() == result.length()  && dictionary.get(i).compareTo(result) < 0)
                result = dictionary.get(i);
            }
        }
        return result;
    }
}
public class solution1 {
    public static void main(String[] args) {
        List<String> dictionary =  new ArrayList<>(Arrays.asList("ale","apple","monkey","plea"));
        String s = "abpcplea";
        Solution sol = new Solution();
        System.out.println(sol.findLongestWord(s, dictionary));
    }
}