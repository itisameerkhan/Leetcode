#include<stdio.h>

int majorityElement(int* a, int n){
    int voter=a[0];
    int voteCount=1;
    for(int i=0;i<n;i++)
    {
        if(voter == a[i])
        voteCount++;
        else 
        voteCount--;

        if(voteCount == 0)
        {
            voter = a[i];
            voteCount=1;
        }
    }
    return voter;
}
int main()
{
    int nums[] = {3,2,3};
    int n = 3;
    printf("%d",majorityElement(nums,n));
}