#include<stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int c, nc, nw, nl, state;
    nc = nw = nl = 0;

    while((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\b')
        {
            state = OUT;
            ++nc;
            if (c == '\n')
            {
                ++nl;
            }    
        }
        else
        {
            state = IN;
            ++nw;
        }
    printf("lines: %d, words: %d, chars: %d\n", nl, nw, nc);
    return 0;
}