#include<stdio.h>
#include<stdbool.h>

bool areAlmostEqual(char * s1, char * s2)
{
    if(strcmp(s1,s2)==0) return true;
    if(strlen(s1)!=strlen(s2)) return false;
    int left = 0;
    int right = strlen(s1)-1;
    while(s1[left]==s2[left]) left++;
    while(s1[right]==s2[right]) right--;
    char t = s1[left];
    s1[left] = s1[right];
    s1[right] = t;
    if(strcmp(s1,s2)==0) return true;
    return false;
}
int main()
{
    char *s1 = "bank";
    char *s2 = "kanb";
    printf(areAlmostEqual(s1,s2));
}