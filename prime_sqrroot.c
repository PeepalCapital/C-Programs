/* Based on simple square root based primality test. Nothing fancy */

#include<stdio.h>
#include<stdbool.h>

bool is_prime(int);

int main(void)
{
    int n;

    printf("Please enter a number: ");
    scanf("%d", &n);
    if (is_prime(n))
        printf("It is a prime number\n");
    else
        printf("It is not a prime number\n");
    
    return 0;
}

bool is_prime(int n)
{
    int divisor;

    if (n <= 1)
        return false;
    for (divisor = 2; divisor * divisor <= n; divisor++)
        if (n % divisor == 0)
            return false;
    return true;
}
