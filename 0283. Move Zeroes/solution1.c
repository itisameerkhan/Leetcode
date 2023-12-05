#include<stdio.h>

void moveZeroes(int* arr, int n)
{
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0) arr[++index] = arr[i];
    }
    for(int i=++index;i<n;i++)
    arr[i] = 0;
    
}
int main()
{
    int nums[] = {0,1,0,3,12};
    int n = 5;
    moveZeroes(nums,n);
    for(int i=0;i<n;i++) printf("%d ",nums[i]);
}