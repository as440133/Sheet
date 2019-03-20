#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    int teams[n][2];
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%i %i", &teams[i][0], &teams[i][1]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(teams[i][0] == teams[j][1])
            cnt++;
        }
    }

    printf("%i\n", cnt);

}