import java.util.*;

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> a = new HashSet<>();
        HashSet<Integer> b = new HashSet<>();
        for(int i=0;i<nums1.length;i++) {
            a.add(nums1[i]);
        }
        for(int i=0;i<nums2.length;i++) {
            if(a.contains(nums2[i])) {
                b.add(nums2[i]);
            }
        }
        int[] result = new int[b.size()];
        int index = 0;
        for(Integer i: b) {
            result[index++] = i;
        }
        return result;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int[] nums1 = {1,2,2,1};
        int[] nums2 = {2,2};
        Solution sol = new Solution();
        int[] result = sol.intersection(nums1, nums2);
        for(Integer i: result) System.out.print(i + " ");
    }
}