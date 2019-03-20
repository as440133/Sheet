#include <stdio.h>
int main(void)
{
    int n;
    scanf("%i", &n);
    
    char sqs[n][n+1];
    char form_x = 1;

    for(int i = 0; i < n; i++)
    {
        scanf("%s", sqs[i]);
        for(int j = 0; j < n; j++)
        {
            if(i == j || j == n-i-1)
            {    
                if(sqs[0][0] != sqs[i][j])
                {
                    form_x = 0;
                    break;
                }
            }
            else
            {
                if(sqs[i][j] != sqs[0][1] || sqs[i][j] == sqs[0][0] )
                {
                    form_x = 0;
                    break;
                }
            }
        }
    }

    if (form_x) {
        printf("YES\n");
    }
    else
        printf("NO\n");

}