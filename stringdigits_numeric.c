#include<stdio.h>


/* Not working. Concept of arrays not clear*/

int atoi(char s[]);

int main(void)
{
    char c[5];

    c[10] = getchar();

    printf("%d", atoi(c));

    return 0;
}

int atoi(char s[])
{
    int i, n;

    n = 0;
    for(i = 0; s[i] >='0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}