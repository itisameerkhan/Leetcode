import java.util.*;

class Solution {
    public int firstMissingPositive(int[] nums) {
        int[] freq = new int[nums.length+1]; 
        Arrays.fill(freq, -1);
        for(int i=0;i<nums.length;i++) {
            if(nums[i] <= nums.length && !(nums[i] <= 0)) {
                freq[nums[i]-1] = 1;
            }
        }
        for(int i=0;i<freq.length;i++) {
            if(freq[i] == -1) return i+1;
        }
        return nums.length;
    }
}

public class solution1 {
    public static void main(String[] args) {
        int[] nums = {1,2,0};
        Solution sol = new Solution();
        System.out.println(sol.firstMissingPositive(nums));
    }
}