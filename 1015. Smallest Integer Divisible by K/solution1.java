import java.util.*;

class Solution {
    public int smallestRepunitDivByK(int k) {
        int nums = 0;
        for(int i=1;i<=k;i++) {
            nums = ((nums * 10) + 1) % k;
            if(nums == 0) return i; 
        }
        return -1;
    }
}
public class solution1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        Solution sol = new Solution();
        System.out.println(sol.smallestRepunitDivByK(k)); 
        sc.close();            
    }
}