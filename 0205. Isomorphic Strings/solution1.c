#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool isIsomorphic(char * s, char * t)
{
    if(strlen(s) < strlen(t) || (strlen(s) > strlen(t))) return false;
    int s_count[strlen(s)];
    int t_count[strlen(t)];
    int count1[27] = {0};
    for(int i=0;i<strlen(s);i++)
    {
        count[s[i]-96]++;
    }
    for(int i=0;i<strlen(s);i++) s_count[i] = count[s[i]-96];

}
int main()
{
    char s[100],t[100];
    scanf("%s %s",s,t);
    if(isIsomorphic(s,t)) printf("TRUE");
    else printf("FALSE");
}