#include <stdio.h>

/* two things are imp 1: else if statements 2: Ctrl + z in terminal output to break the loop then press enter*/

main()
{
    int c, nb, nt, nl;
    nb = nt = nl = 0;
    
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    printf ("blanks: %d tabs: %d lines: %d\n", nb, nt, nl);
}