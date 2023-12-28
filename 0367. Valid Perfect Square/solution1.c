#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool isPerfectSquare(int num){
    if(num>INT_MIN && INT_MAX>num)
    {
        for(long i=0;i<=num;i++)
        {
            if(i*i==num)
                return true;
        }
    }
    return false;
}
int main()
{
    int n = 16;
    if(isPerfectSquare(n)) printf("TRUE");
    else printf("FALSE");
}