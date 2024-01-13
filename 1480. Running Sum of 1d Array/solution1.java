class Solution {
    public int[] runningSum(int[] nums) {
        int sum = nums[0];
        if(nums.length == 1) return nums;
        for(int i=1;i<nums.length;i++) {
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4};
        Solution sol = new Solution();
        int[] result = sol.runningSum(nums);
        for(Integer i: result) System.out.print(i + " ");
    } 
}