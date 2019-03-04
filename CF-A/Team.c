#include <stdio.h>

int main(void)
{
    int n;
    int solved = 0;
    scanf("%i", &n);

    for(int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%i %i %i", &a, &b, &c);

        if(a+b+c >= 2)
            solved++;
    }

    printf("%i", solved);
    
}