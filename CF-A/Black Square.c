#include <stdio.h>
#include <string.h>

int main(void)
{
    int values[4];
    char st[1000001];
    int calors = 0;

    for(int i = 0; i < 4; i++){
        scanf("%i", &values[i]);
    }

    scanf("%s", st);

    for(int i = 0; i < strlen(st); i++)
    {
        calors += values[st[i]-49];
    }

    printf("%i\n", calors);
}