import java.util.*;

class Solution {
    public static boolean compare(String a, String b) {
        return a.concat(b).compareTo(b.concat(a)) > 0;
    }
    public String largestNumber(int[] nums) {
        List<String> stringList = new ArrayList<>();
        for(Integer i: nums) stringList.add(Integer.toString(i));
        Collections.sort(stringList, (a,b) -> compare(a, b) ?  -1 : 1);
        StringBuilder result = new StringBuilder();
        int index=0;
        while(index < stringList.size() && stringList.get(index).equals("0")) index++;
        while(index < stringList.size()) {
            result.append(stringList.get(index));
            index++;
        }
        if(result.toString().equals("")) return "0";
        return result.toString();
    }
}
public class solution2 {
    public static void main(String[] args) {
        int[] nums = {3,30,34,5,9};
        Solution sol = new Solution();
        System.out.println(sol.largestNumber(nums));
    }
}