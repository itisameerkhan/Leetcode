class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int[] result = new 
    }
}
public class solution1 {
    public static void main(String[] args) {
        int[] nums1 = {1,2,2,1};
        int[] nums2 = {2,2};
        Solution sol = new Solution();
        int[] result = sol.intersection(nums1, nums2);
        for(Integer i: result) System.out.print(result[i] + " ");
    }
}