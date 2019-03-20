#include <stdio.h>
#include <ctype.h>
#include <string.h>

int cons(char c)
{
    if( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || 
        c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        return 0;
    else
        return 1;
}

int main(void)
{
    char s[101];
    scanf("%s", s);

    for(int i = 0;i < strlen(s); i++)
    {
        if(cons(s[i]))
        {
            printf(".%c", tolower(s[i]));
        }
    }
    printf("\n");
    
}