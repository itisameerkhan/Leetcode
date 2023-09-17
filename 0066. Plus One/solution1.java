import java.util.*;

class Solution {
    public int[] plusOne(int[] digits) {
        
        int n=digits.length;
        
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        int[] newNumber = new int[n+1];
        newNumber[0] = 1;
        return newNumber;
        
    }
}
public class solution1 
{
    public static void main(String[] args)
    {
        Solution sol = new Solution();
        int[] nums = {1,2,3};
        int[] result = sol.plusOne(nums);
        for(int i=0;i<result.length;i++) System.out.print(result[i] + " ");
    }
}