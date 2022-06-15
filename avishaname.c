#include<stdio.h>

main()
{
    int i, j;

    for (i = 0; i < 11; ++i)
        {
            printf("%2d ", i);
            for (j = 0; j < i; ++j)
                printf("Avisha is naughty");
            printf("\n");  
        }         
}