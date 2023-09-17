#include<stdio.h>
#include<math.h>

double myPow(double x, int n)
{
    return pow(x,n);
}
int main()
{
    double x = 2.00000;
    int n = 10;
    printf("%lf",myPow(x,n));
}