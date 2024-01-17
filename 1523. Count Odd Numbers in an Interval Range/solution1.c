#include<stdio.h>

int countOdds(int low, int high)
{
    int n = high-low+1;
    if(low%2==1 && high%2==1) return (n/2)+1;
    else if(low%2==0 && high%2==0) return n/2;
    else if((low%2==1 && high%2==0) || (low%2==0 && high%2==1)) return n/2;
    return high-low+1;
}
int main()
{
    int low = 3;
    int high = 7;
    printf("%d",countOdds(low, high));
}