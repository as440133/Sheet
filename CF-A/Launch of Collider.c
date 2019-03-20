#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    char dirs[n+1];
    int pars[n];

    scanf("%s", dirs);
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &pars[i]);
    }
    
    unsigned long int moment = 1000000000000000;
    int flag = 0;

    for(int i = 0; i < n-1; i++)
    {
        if(dirs[i] == 'R' && dirs[i+1] == 'L')
        {
            flag = 1;
            int result = (pars[i+1] - pars[i]) / 2;
            if(result < moment)
                moment = (pars[i+1] - pars[i]) / 2;
        }
    }

    if(flag)
        printf("%lu\n", moment);
    else
        printf("-1\n");
}