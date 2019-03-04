#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, col;
    for(int i = 1; i <= 5;i++)
    {
        for(int x = 1; x <= 5; x++)
        {
            int num;
            scanf("%i", &num);

            if(num == 1)
            {
                row = i;
                col = x;
                break;
            }
        }
    }

    printf("%i", abs(row-3) + abs(col-3));
}