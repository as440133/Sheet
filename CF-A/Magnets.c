#include <stdio.h>

int main(void)
{
    int n;
    int groups = 1;
    scanf("%i", &n);

    char mag[n][3];
    for(int i = 0; i < n; i++)
    {
        scanf("%s", mag[i]);
    }

    for(int i = 0;i < n-1; i++)
    {
        if(mag[i][1] == mag[i+1][0])
        {
            groups++;
        }
    }

    printf("\n%i\n", groups);
    
}