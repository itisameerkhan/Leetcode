#include<stdio.h>

int numIdenticalPairs(int* nums, int n){
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            count++;
        }
    }
    return count;
}
int main()
{
    int nums[] = {1,2,3,1,1,3};
    printf("%d", numIdenticalPairs(nums, 6));
}