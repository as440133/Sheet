#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char word[1001];
    scanf("%s", word);

    word[0] = toupper(word[0]);
    printf("%s", word);
}