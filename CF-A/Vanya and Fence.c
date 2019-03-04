#include <stdio.h>

int main(void)
{
    int n, h;
    int width = 0;
    scanf("%i %i", &n, &h);

    for(int i = 0; i < n; i++)
    {
        int person;
        scanf("%i", &person);

        if(person > h)
            width += 2;
        else
            width++;
    }

    printf("%i", width);

    

}