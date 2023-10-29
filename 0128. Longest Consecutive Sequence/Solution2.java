import java.util.*;

class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length == 0) return 0;
        
        TreeSet<Integer> set = new TreeSet<>();
        int longest=1,count=1,index=-1;

        for(int i: nums) { set.add(i); }
        int[] list = new int[set.size()];
        // System.out.print(list.length);
        for(int i: set) { list[++index] = i; }

        // for(int i: list) System.out.print(i + " ");

        for(int i=0;i<list.length-1;i++) {
            if(list[i+1]-list[i] == 1) {
                count++;
                System.out.println(count);
            }
            else {
                longest = Math.max(longest, count);
                count = 1;
            }
            longest = Math.max(longest, count);
        }
        return longest;
    }
}
public class Solution2 {
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
