class Solution {
    public boolean isPowerOfFour(int n) {
        for(int i=0;i<50;i++)
        {
            if(Math.pow(4,i)==n)
                return true;
        }
        return false;
        
    }
}
public class solution1 {
    public static void main(String[] args) {
        int n = 16;
        Solution sol = new Solution();
        if(sol.isPowerOfFour(n)) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}