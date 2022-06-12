#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = -20, -10, ...., 60 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;    /*lower limit of temperature table */
    upper = 60;     /* upper limit */
    step = 1;      /* step size */

    printf("This is a conversion table from Celsius to Fahrenheit\n");

    celsius = lower;
    while (celsius <= upper) 
    {
        fahr = 32 + ((9 * celsius) / 5);
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
}