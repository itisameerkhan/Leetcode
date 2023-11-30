import java.util.*;

class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer, Integer> left = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i ++){
            if (left.containsKey(nums[i])){
                if (i - left.get(nums[i])<= k){
                    return true;
                }
            }
            left.put(nums[i], i);
        }//for i
        return false;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int[] nums = new int[]{1,2,3,1};
        int k = 3;
        Solution sol = new Solution();
        if(sol.containsNearbyDuplicate(nums, k)) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}