public class Solution1 
{
    public static int[] twoSum(int[] nums,int target)
    {
        for(int i=0;i<nums.length;i++)
        {
            for(int j=0;j<nums.length;j++)
            {
                if(nums[i]+nums[j]==target)
                return new int[]{i,j};
            }
        }
        return new int[]{-1,-1};
    }
    public static void main(String[] args)
    {
        int nums[] = new int[] {2,7,11,15};
        int target = 9;
        int ans[] = twoSum(nums, target);
        System.out.println(ans[0] + " " + ans[1]);
    }
}