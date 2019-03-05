#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    char stones[n+1];
    scanf("%s", stones);

    int count = 0;

    for(int i = 0; i < n-1; i++)
    {
        if(stones[i] == stones[i+1])
            count++;
    }

    printf("%i\n", count);
    
}