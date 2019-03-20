#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    char stats[n][4];
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%s", stats[i]);
        if(stats[i][0] == '+' || stats[i][2] == '+')
            sum++;
        else
            sum--;
    }

    printf("%i\n", sum);
}