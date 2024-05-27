import java.util.Arrays;
import java.util.HashMap;

class Solution {
    public int mostFrequentEven(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i++) {
            System.out.println(nums[i]);
            if(nums[i] % 2 == 0) {
                if(map.containsKey(nums[i])) {
                    map.put(nums[i], map.get(nums[i]) + 1);
                } else {
                    map.put(nums[i], 1);
                }
            }
        }
        int resultValue = -1, result = -1;
        for(int key : map.keySet()) {
            int value = map.get(key);
            System.out.println(key + " " + value);
            if(value > resultValue) {
                result = key;
                resultValue = value;
            } else if(value == resultValue) {
                if(key < result) {
                    result = key;
                }
            }
        }
        return result;
    }
}
public class solution1 {
 public static void main(String[] args) {
    int[] nums = {8267,8727,2649,7359,2142,7824,7399,3424,8868,476,9769,4631,6631,4205,9178,7920,4748,5523,74,5550,516,6448,3475,7867,7041,5896,4382,2066,8101,674,67,9311,4308,1693,4586,3959,2973,2158,5067,9060,2988,1147,1746,9722,8550,9126,3029,1677,4154,5473,6589,5381,1486,8699,792,8349,6773,496,4505,6163,6843,1232,4809,4432,6251,7658,4949,1419,7005,3815,6295,4635,7785,4891,6941,6952,7218,134,2718,7409,9551};
    Solution sol = new Solution();
    System.out.println(sol.mostFrequentEven(nums));
 }   
}
