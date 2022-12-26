#include<stdio.h>

int slength(char s[]);

int main(void)
{
    char line[10];
    line[10] = getchar();
    printf("%s\n", line);


    return 0;
}

int slength(char s[])
{
    int i;
    
    while (s[i] != '\0')
        ++i;
    return i;
}