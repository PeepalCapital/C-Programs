#include <stdio.h>

main()

{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == ' ' || c == '\\')
        {
            putchar('\\');
            if (c == '\t')
            {
                putchar('t');
            }
            else if (c == ' ')
            {
                putchar('b');
            }
            else if (c == '\\')
            {
                putchar('\\');
            }
        }
        else 
            putchar (c);
    }
}