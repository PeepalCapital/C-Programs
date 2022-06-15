#include <stdio.h>

/* method 2 of calculating power functions */

int power(int m, int n);

main()
{
    int i;

    for (i = 0; i < 10 ; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

int power(int base, int n)
{
    int i;
    
    for (i = 1; i > 0; --i)
        i = i * base;
    return i;
}    