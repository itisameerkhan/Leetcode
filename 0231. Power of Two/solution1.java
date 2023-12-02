class Solution {
    public boolean isPowerOfTwo(int n) {
        for(int i=0;i<=50;i++)
        {
            if(Math.pow(2,i)==n)
            {
                return true;
            }
        }
        return false;
        
    }
}
public class solution1 {
    public static void main(String[] args) {
        int n = 16;
        Solution sol = new Solution();
        if(sol.isPowerOfTwo(n)) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}