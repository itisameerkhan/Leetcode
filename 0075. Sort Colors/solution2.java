import java.util.*;

class Solution {
    public void sortColors(int[] nums) { //NOT RECOMMENDED
        List<Integer> l = new ArrayList<>();
        for(int i=0;i<nums.length;i++)
        l.add(nums[i]);

        Collections.sort(l);
        int i=-1;
        for(Object o: l)
        {
            nums[++i] = (int)o;
        }

    }
}
