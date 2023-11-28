import java.util.*;

class Solution {
    public boolean containsDuplicate(int[] nums) {
         int i;
        Arrays.sort(nums);
        for(i=0;i<nums.length-1;i++)
        {
            if(nums[i]==nums[i+1])
            return true;
        }
        return false;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int[] nums = new int[]{1,2,3,1};
        Solution sol = new Solution();
        if(sol.containsDuplicate(nums)) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}