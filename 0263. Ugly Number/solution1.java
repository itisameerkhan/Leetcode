import java.util.*;

class Solution {
    public boolean isUgly(int n) {
        if(n==1)
            return true;
        else if(n==0)
            return false;
        
        while(n!=1)
        {
            if(n%2==0)
                n/=2;
            else if(n%3==0)
                n/=3;
            else if(n%5==0)
                n/=5;
            else 
                return false;
        }
        if(n==1)
            return true;
        
        return false;
    }
}
public class solution1 
{
    public static void main(String[] args)
    {
        int n = 6;
        Solution sol = new Solution();
        if(sol.isUgly(n)) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}