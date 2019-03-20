#include <stdio.h>

int main(void)
{
    int n;
    int total = 0;
    scanf("%i", &n);

    for(int i = 0; i < n; i++)
    {
        char shape[20];
        scanf("%s", shape);

        switch (shape[0])
        {
            case 'T':
                total += 4;
                break;
            case 'C':
                total += 6;
                break;
            case 'O':
                total += 8;
                break;
            case 'D':
                total += 12;
                break;
            case 'I':
                total += 20;
        }
   }

   printf("%i\n", total);
    
}