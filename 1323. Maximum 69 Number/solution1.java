import java.util.*;

class Solution {
    public int maximum69Number (int num) {
        String s = Integer.toString(num);
        char[] ch = s.toCharArray();
        for(int i=0;i<ch.length;i++) {
            if(ch[i] == '6') {
                ch[i] = '9';
                break;
            }
        }
        String str = new String(ch);
        return Integer.parseInt(str);
    }
}
public class solution1 {
    public static void main(String[] args) {
        int num = 9669;
        Solution sol = new Solution();
        System.out.println(sol.maximum69Number(num));
    }   
}
