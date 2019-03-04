#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    int cols[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%i", &cols[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int x = i; x < n; x++)
        {
            if(cols[x] < cols[i])
            {
                int temp = cols[x];
                cols[x] = cols[i];
                cols[i] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("%i ", cols[i]);
    }
}