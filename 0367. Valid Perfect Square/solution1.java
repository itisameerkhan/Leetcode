class Solution {
    public boolean isPerfectSquare(int num) {
        if(num>Integer.MIN_VALUE && num<Integer.MAX_VALUE)
        {
            for(long i=0;i<=num;i++)
            {
                if(i*i==num)
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
        if(sol.isPerfectSquare(n)) System.out.println("true");
        else System.out.println("false");
    }
}