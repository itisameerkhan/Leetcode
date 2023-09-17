class Solution {
    public int[] searchRange(int[] nums, int target) {
        int a=-1,b=-1;
        for(int i=0;i<nums.length;i++) if(nums[i] == target) { a = i; break;}
        for(int i=nums.length-1;i>=0;i--) if(nums[i] == target) {b = i; break;}
        return new int[] {a,b};
    }
}
public class solution1
{
    public static void main(String[] args)
    {
        Solution sol = new Solution();
        int[] nums = {5,7,7,8,8,10};
        int target = 8;
        int[] result = sol.searchRange(nums, target);
        for(int i: result) System.out.print(i + " ");
    }
}