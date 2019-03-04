#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s1[101];
    char s2[101];

    int status = 0;

    scanf("%s %s", s1, s2);

    for(int i = 0; i < strlen(s1); i++)
    {
        if(toupper(s1[i]) < toupper(s2[i]))
        {
            status = -1;
            break;
        }
        else if(toupper(s1[i]) > toupper(s2[i]))
        {
            status = 1;
            break;
        }
    }

    printf("%i", status);

}