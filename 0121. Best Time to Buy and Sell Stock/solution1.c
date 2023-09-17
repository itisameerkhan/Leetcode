#include<stdio.h>
#include<limits.h>
int maxProfit(int* prices, int n)
{
    int min=INT_MAX,ans=0,sum=0;
    for(int i=0;i<n;i++)
    {
        if(prices[i]<min)
        min = prices[i];

        sum = prices[i] - min;
        if(sum > ans)
        ans = sum;
    }
    return ans;
}
int main()
{
    int prices[] = {7,1,5,3,6,4};
    printf("%d",maxProfit(prices,7));
}