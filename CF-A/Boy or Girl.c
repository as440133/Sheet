#include <stdio.h>
#include <string.h>


int main(void)
{
    char girl[101];
    int distinct = 0;

    scanf("%s", girl);

    for(int i = 0; i < strlen(girl); i++)
    {
        int found = 0;
        for(int j = 0; j < i; j++)
        {
            if(girl[i] == girl[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
            distinct++;
    }

    if(distinct % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

}