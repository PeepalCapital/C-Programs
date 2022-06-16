#include<stdio.h>

/* Something at the end of execution seems amiss. Have to relook at it */

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
        {   if (c == ' ' || c == '\n' || c == '\t' || c == '.' || c == ',' || c == ':' || c == ';'
                || c == '!'  || c == '?'  || c == '"')
            {
                while((c = getchar()) == ' ' || c == '\n' || c == '\t' || c == '.' || c == ',' || c == ':' || c == ';'
                    || c == '!'  || c == '?'  || c == '"')
                    ;
                putchar('\n');
            }
            putchar(c);
        }
    
    return 0;
}