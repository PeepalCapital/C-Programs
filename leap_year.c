#include<stdio.h>

int main(void)
{
    int year;

    year = 2001; /* Input year to be modified*/

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year", year);

    return 0;
}