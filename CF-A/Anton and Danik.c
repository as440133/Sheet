#include <stdio.h>

int main(void)
{
    int n;
    int anton = 0, 
        danik = 0;

    scanf("%i", &n);

    for(int i = 0; i < n; i++)
    {
        char status;
        scanf(" %c", &status);

        if(status == 'A')
            anton++;
        else
            danik++;
    }

    if(anton > danik)
        printf("Anton");
    else if(danik > anton)
        printf("Danik");
    else
        printf("Friendship");
}