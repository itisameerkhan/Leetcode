import java.util.*;

class Solution {
    public int singleNumber(int[] nums) {
        
        int res = 0;
        for(int x: nums)
        {
            res ^= x;
        }
        return res;
    }
}
public class solution1 
{
    public static void main(String[] args)
    {
        int[] nums = {4,1,2,1,2};
        Solution sol = new Solution();
        System.out.println(sol.singleNumber(nums));
    }
}