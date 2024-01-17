#include<stdio.h>
#include<stdbool.h>

bool areAlmostEqual(char * s1, char * s2)
{
    if(strlen(s1)==1 && strlen(s2)==1) 
    {
        if(strcmp(s1,s2)==0) return true;
        else return false;
    }
    if(strlen(s1)!=strlen(s2)) return false;
    int i=0,j=1;
    while(s1[i]!='\0')
    {
        char t = s1[i];
        s1[i] = s1[j];
        s1[j] = t;
        if(strcmp(s1,s2)==0) return true;
        else 
        {
            t = s1[i];
            s1[i] = s1[j];
            s1[j] = t;
        }
        j++;
        if(j==strlen(s1))
        {
            i++;
            j=0;
        }
    }
    return false;
}
int main()
{
    char *s1 = "bank";
    char *s2 = "kanb";
    printf(areAlmostEqual(s1,s2));
}