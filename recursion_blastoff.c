/* This is an example in the book Think Python by Allen Downey. I wanted to implement it in C */

#include<stdio.h>

int countdown(int n);

int main(void)
{
    int c;

    printf("Enter countdown sequence number: ");
    scanf("%d", &c);
    countdown(c);
}

int countdown(int n)
{
    if (n <= 0)
        {
            printf("Blastoff!");
            return 0;
        }
    else
        {
            printf("%d\n", n);
            countdown(n - 1);
        }
}