#include<stdio.h>

int slength(char s[]);

main()
{
    char c;

    c = getchar();
    printf("%d\n", slength(c));
}

int slength(char s[])
{
    int i;
    
    while (s[i] != '\0')
        ++i;
    return i;
}