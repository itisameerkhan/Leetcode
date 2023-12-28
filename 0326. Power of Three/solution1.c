#include<stdio.h>
#include<stdbool.h>

bool isPowerOfThree(int n){
    for(int i=0;i<50;i++)
    {
        if(pow(3,i)==n)
            return true;
    }
    return false;

}

int main()
{
    int n = 27;
    if(isPowerOfThree(n)) printf("TRUE");
    else printf("FALSE");
}
