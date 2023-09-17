import java.util.*;
class Solution
{
    private void findCombinations(int index,int[] arr,int target,List<List<Integer>> ans,List<Integer> ds)
    {
        if(index==arr.length) 
        {
            if(target==0)
            {
                ans.add(new ArrayList<>(ds));
            }
            return;
        }
        if(arr[index]<=target)
        {
            ds.add(arr[index]);
            findCombinations(index, arr, target-arr[index], ans, ds);
            ds.remove(ds.size()-1);
        }
        findCombinations(index+1, arr, target, ans, ds);
    }
    public List<List<Integer>> combinationSum(int[] candidates,int target)
    {
        List<List<Integer>> ans = new ArrayList<>();
        findCombinations(0,candidates,target,ans,new ArrayList<>());
        return ans;
    }
}
public class Solution1
{
    public static void main(String[] args)
    {
        int[] candidates = {2,3,6,7};
        int target = 7;
        Solution s = new Solution();
        List<List<Integer>> ans = s.combinationSum(candidates, target);
        for(List<Integer> innerList: ans)
        {
            for(int i:innerList)
            {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}