#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPowerOfTwo(int n){
    for(int i=0;i<=40;i++)
    {
        long x = pow(2,i);
        if(x==n)
        {
            return true;
        }
    }
    return false;
}
int main() 
{
    int n = 16;
    if(isPowerOfTwo(n)) printf("TRUE");
    else printf("FALSE");
}