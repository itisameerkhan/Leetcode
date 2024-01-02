import java.util.*;

class Solution {
    public String largestNumber(int[] nums) {
        List<String> stringList = new ArrayList<>();
        for(Integer i: nums) {
            stringList.add(i.toString());
        }
        Collections.sort(stringList, new Comparator<String>() {
            public int compare(String a, String b) {
                return (b + a).compareTo(a + b);
            }
        });
        
        int index=0;
        String result="";
        while(index < stringList.size() && stringList.get(index).equals("0")) index++;
        while(index < stringList.size()) {
            result += stringList.get(index);
            index++;
        } 
        if(result.equals("")) return "0";
        return result;
    }
}
public class solution1 {
    public static void main(String[] args) {
        int[] nums = {3,30,34,5,9};
        Solution sol = new Solution();
        System.out.println(sol.largestNumber(nums));
    }
}