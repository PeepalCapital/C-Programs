#include <stdio.h>

main()
{
    int c;

    c = getchar() != EOF;
    printf("EOF Value for getchar() != EOF is  %d", c);

}