#include<stdio.h>

int fibo(int a);

int main(void)
{
    int n;

    printf("Enter number of elements in Fibonacci sequence: ");
    scanf("%d", &n);
    printf("%d", fibo(n));

    return 0;
}

int fibo (int a)
{
    int i;

    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibo(i - 1) + fibo(i - 2));
}
