#include <stdio.h>

int main(void)
{
    int shos[4];
    int dup = 0;
    
    for(int i = 0; i < 4; i++)
    {
        scanf("%i", &shos[i]);
        for(int j = 0; j < i; j++)
        {
            if(shos[i] == shos[j])
            {
                dup++;
                break;
            }
        }
    }

    printf("%i\n", dup);

}