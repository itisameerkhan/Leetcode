#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums,int n,int target,int returnSize)
{
    returnSize = 2;
    int *ans = malloc(sizeof(int)*2);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    ans[0] = -1;
    ans[1] = -1;
    return ans;
}
int main()
{
    int nums[] = {2,7,11,15};
    int target = 9;
    int* ans = twoSum(nums,4,target,sizeof(int));
    printf("%d %d",*ans,*(ans+1));
}