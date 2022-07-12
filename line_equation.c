/* equation of a line with intercepts and slope */
#include<stdio.h>

int main(void)
{
    float a, b, c;
    float x_intercept, y_intercept, m;

    printf("A linear  equation is of the form ax + by + c = 0\n");
    printf("Please enter value of a:");
    scanf("%d", &a);
    printf("Please enter value of b:");
    scanf("%d", &b);
    printf("Please enter value of c:");
    scanf("%d", &c);

    x_intercept = - c / a;
    y_intercept = - c / b;
    m = - a / b;

    printf("The x intercept is %0.2f, y intercept is %0.2f and slope is %0.2f", x_intercept, y_intercept, m);

    return 0;

}