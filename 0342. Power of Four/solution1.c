#include<stdio.h>
#include<stdbool.h>

bool isPowerOfFour(int n){
    for(int i=0;i<50;i++)
    {
        if(pow(4,i)==n)
            return true;
    }
    return false;
}
int main()
{
    int n = 16;
    if(isPowerOfFour(n)) printf("TRUE");
    else printf("FALSE");
}