import java.util.*;

class Solution {
    public boolean checkFrequency(int[] s1, int[] s2) {
        for(int i=0;i<s1.length;i++) {
            if(s1[i] != s2[i]) return false;
        }
        return true;
    }
    public boolean checkInclusion(String s1, String s2) {

        if(s1.length() > s2.length()) return false;

        int[] freqS1 = new int[26]; Arrays.fill(freqS1, 0);
        int[] freqS2 = new int[26]; Arrays.fill(freqS2, 0);

        for(int i=0;i<s1.length();i++) freqS1[s1.charAt(i)-'a']++;

        int i=0,j=0;
        while(j < s2.length()) {
            freqS2[s2.charAt(j)-'a']++;

            if(j-i+1 == s1.length()) {
                if(checkFrequency(freqS1, freqS2)) return true;
            }

            if(j-i+1 < s1.length()) j++;
            else {
                freqS2[s2.charAt(i)-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
}
public class solution1 {
    public static void main(String[] args) {
        String s1 = "ab";
        String s2 = "eidbaooo";
        Solution sol = new Solution();
        if(sol.checkInclusion(s1, s2)) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}