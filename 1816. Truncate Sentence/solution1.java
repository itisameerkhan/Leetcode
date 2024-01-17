class Solution {
    public String truncateSentence(String s, int k) {
        String[] arr = new String[s.length()];
        arr = s.split(" ");
        int index=0;
        String res = "";
        while(k-->0) 
        {
            res += arr[index++];
            if(k>0) res += " ";
        }
        return res;
    }
}
public class solution1 {
    public static void main(String[] args) {
        String s = "Hello how are you Contestant";
        int k = 4;
        Solution sol = new Solution();
        System.out.println(sol.truncateSentence(s, k));
    }
}