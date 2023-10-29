import java.util.*;

class Solution {


    public int longestConsecutive(int[] nums) {
        if(nums.length == 0) return 0;
        int longest=1,count=0, currentSmall=Integer.MIN_VALUE;
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i++) {

            if(nums[i]-1 == nums[i-1]) {
                count++;
                currentSmall = nums[i];
            }
            else if(nums[i] != currentSmall) {
                if(count > longest) longest = count;
                count = 1;
                currentSmall = nums[i]; 
            }
            if(count > longest) longest = count;
        }
        return longest;
    }
}

public class Solution1 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] nums = new int[n];
        for(int i=0;i<n;i++) nums[i] = sc.nextInt();
        Solution sol = new Solution();
        System.out.println(sol.longestConsecutive(nums));
    }
}
