#include<stdio.h>

int mySqrt(int x){
    if(x==0 || x==1) return x;

    int start = 0;
    int end = x;
    int mid = -1;

    while(start <= end) 
    {
        mid = start + (end - start) / 2;

        if((double)mid * mid > (double)x) end = mid - 1;
        else if(mid * mid == x) return mid;
        else start = mid + 1;
    }

    return (int)end;
}
int main()
{
    int x;
    scanf("%d", &x);

}