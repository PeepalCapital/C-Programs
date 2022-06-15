#include <stdio.h>

/* get put char example 2 */

main()
{
    int c;

    while ( (c = getchar()) != EOF)
        putchar(c);
}