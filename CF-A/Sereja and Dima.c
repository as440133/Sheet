#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    int cards[n];

    int tl = 0, tr = 0;
    int serjea = 0, dima = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%i", &cards[i]);
    }
    
    while(n - (tl+tr))
    {
        if(cards[tl] > cards[n-tr-1])
        {
            serjea += cards[tl];
            tl++;
        }
        else
        {
            serjea += cards[n-tr-1];
            tr++;
        }

        if(n == (tl+tr))
            break;
        
        if(cards[tl] > cards[n-tr-1])
        {
            dima += cards[tl];
            tl++;
        }
        else
        {
            dima += cards[n-tr-1];
            tr++;
        }
    }

    printf("%i %i \n", serjea, dima);
    
}