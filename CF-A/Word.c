#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char st[101];
    scanf("%s", st);

    int upp_lt = 0;
    int low_lt = 0;

    for(int i = 0; i < strlen(st); i++)
    {
        if(islower(st[i]))
            low_lt++;
        else
            upp_lt++;
    }

    if(low_lt > upp_lt || low_lt == upp_lt)
    {
        for(int i = 0; i < strlen(st); i++)
        {
            printf("%c", tolower(st[i]));
        }
    }
    else
    {
        for(int i = 0; i < strlen(st); i++)
        {
            printf("%c", toupper(st[i]));
        }
    }
    
    

}