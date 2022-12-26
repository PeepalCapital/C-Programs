#include<stdio.h>

/* Program for entertaining my daughter */

int main(void)
{
    int i, j, k, l;

    for (i = 0; i < 11; ++i)
        {
            printf("%2d ", i);
            for (j = 0; j < i; ++j)
                printf("12");
            printf("\n");  
        }
    return 0;
}