import java.util.*;

class Solution {
    public int majorityElement(int[] nums) {
     
         // Base case...
        if (nums.length == 1) {
		    return nums[0];
	    }
        // Sort nums array...
        Arrays.sort(nums);
        // Since the majority element appears more than n / 2 times...
        // The n/2 -th element in the sorted nums must be the majority element...
	    return nums[nums.length / 2];
    }
}
public class Solution1
{
    public static void main(String[] args)
    {
        int[] nums = {3,2,3};
        Solution sol = new Solution();
        System.out.println(sol.majorityElement(nums));
    }
}