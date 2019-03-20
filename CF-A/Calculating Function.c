#include <stdio.h>

int main(void)
{
    long long n;
    scanf("%I64d", &n);

    if(n % 2 == 0)
        printf("%I64d\n", n/2);
    else
        printf("-%I64d\n", (n+1)/2);
}