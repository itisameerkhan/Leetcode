import java.util.*;

class Solution {
    public int commonFactors(int a, int b) {
        int result = 0;
        for(int i=1;i<= (a < b ? a : b);i++) {
            if(a%i==0 && b%i==0) result++;
        }
        return result;
    }
}
public class solution1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        Solution sol = new Solution();
        System.out.println(sol.commonFactors(a, b));
    }    
}
