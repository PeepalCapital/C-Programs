/* step and low and high are just assumed for celsius conversions*/

#include<stdio.h>

float temp_conv (float celsius);

int main(void)
{
    int c;
    c = 0;
    while (c <= 100)
    {
        printf("%3d C    %5.1f F\n", c, temp_conv(c));
        ++c;
    }
    return 0;
}

float temp_conv (float celsius)
{
    float fahr;

    fahr = 32 + ((9 * celsius) / 5);
    return fahr;
}