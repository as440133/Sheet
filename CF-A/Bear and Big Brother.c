#include <stdio.h>

int main(void)
{
    int limak, bob;
    int years = 0;
    scanf("%i %i", &limak, &bob);

    while(limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        years++;
    }

    printf("%i", years);
    
}