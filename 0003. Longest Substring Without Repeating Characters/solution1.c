#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>

int lengthOfLongestSubstring(char * s)
{
    int n = strlen(s);
    int *visited = (int*)calloc(256,sizeof(int));
    int maxLength = 0;
    int start = 0;
    for(int i=0;i<n;i++)
    {
        char currentChar = s[i];
        while(visited[currentChar]) 
        {
             // if visited unvisit the element from the first index then increase start for length calculation
            visited[s[start]] = 0;
            start++;
        }
        visited[currentChar] = 1;
        int currentLength = i - start + 1;
        if(currentLength > maxLength) maxLength = currentLength;
    }
    return maxLength;
}

int main()
{
    char s[100];
    scanf("%[^\n]%*c",s);
    printf("%d",lengthOfLongestSubstring(s));
}