class Solution {
    public boolean isPowerOfThree(int n) {
        for(int i=0;i<50;i++)
        {
            if(Math.pow(3,i)==n)
                return true;
        }
        return false;
        
    }
}

public class solution1 {
    public static void main(String[] args) {
        int n = 27;
        Solution sol = new Solution();
        if(sol.isPowerOfThree(n)) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}
