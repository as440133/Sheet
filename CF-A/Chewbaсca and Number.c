#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[20];
    fgets(s, sizeof(s),stdin);

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] > '4')
            s[i] = '9' - s[i] + '0';
    }

    if(s[0] == '0')
        s[0] = '9';
    
    printf("%s", s);
    
}