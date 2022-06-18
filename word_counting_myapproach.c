#include<stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int c, nc, nw, nl, state;
    nc = nw = nl = 0;

    state = OUT;
    while((c = getchar()) != EOF)
        {
            ++nc;
        if (c == '\n')
            {
                ++nl;
            }
        if (c == ' ' || c == '\n' || c == '\t')
            {
                state = OUT;
            }
        else if (state == OUT)
            {
                state = IN;
                ++nw;
            }
        }       
    printf("lines: %d, words: %d, chars: %d\n", nl, nw, nc);
    return 0;
}