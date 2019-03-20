#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101];
    char t[101];
    int equal = 1;
    scanf("%s %s", s, t);

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] != t[strlen(t)-i-1])
        {
            equal = 0;
            break;
        }
    }

    if(equal)
        printf("YES\n");
    else
        printf("NO\n");
    
}