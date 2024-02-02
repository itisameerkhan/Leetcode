import java.util.*;

class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        List <Integer> result = new ArrayList<>();
        int[] numList = {12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,1234,
            2345,3456,4567,5678,6789,12345,23456,34567,45678,56789,123456,234567,
            345678,456789,1234567,2345678,3456789,12345678,23456789,123456789};

        for(int i=0;i<numList.length;i++) {
            if(low <= numList[i] && numList[i] <= high) result.add(numList[i]);
        }
        return result;
    }
}
public class solution2 {
    public static void main(String[] args) {
        int low=100, high=300;
        Solution sol = new Solution();
        List<Integer> result = sol.sequentialDigits(low, high);
        for(Integer i: result) System.out.print(i + " ");
    }
}