#include<stdio.h>
#include<string.h>
int lengthOfLastWord(char * s)
{
   int count=0;
   int n = strlen(s)-1;
   while(s[n]==' ') n--;
   for(int i=n;i>=0;i--) 
   {
       if(s[i]!=' ') count++;
       else break;
   }
   return count;
}
int main()
{
    char s[100];
    scanf("%[^\n]%*c",s);
    printf("%d",lengthOfLastWord(s));
}