#include <stdio.h>

int main(void)
{
    int n;
    int police = 0, crimes = 0;

    scanf("%i", &n);
    for(int i = 0; i < n; i++)
    {
        int event;
        scanf("%i", &event);

        if(event == -1)
        {
            if(police)
                police--;
            else
                crimes++;
        }   
        else
            police += event;
    }

    printf("%i \n", crimes);
   
}