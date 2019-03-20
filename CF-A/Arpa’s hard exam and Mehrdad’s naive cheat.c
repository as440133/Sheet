#include <stdio.h>

int main(void)
{
    unsigned long n;
    scanf("%i", &n);

    int tour[4] = {8, 4, 2, 6};

    if(n == 0)
        printf("1\n");
    else
        printf("%i\n", tour[(n-1) % 4]);

}