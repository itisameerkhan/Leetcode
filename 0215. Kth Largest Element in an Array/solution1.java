import java.util.*;

class Solution {
    public int findKthLargest(int[] nums, int k) {
        Arrays.sort(nums);
        int i = nums.length-k;
        return nums[i];
    }
}
public class solution1 {
    public static void main(String[] args) {
        int[] nums = {3,2,1,5,6,4};
        int k = 2;
        Solution sol = new Solution();
        System.out.println(sol.findKthLargest(nums, k));
    }
}