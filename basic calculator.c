#include <stdio.h>

void main()
{   double num1,num2;
    printf("Enter first number:");
    scanf("%lf",&num1);
    printf("Enter second number:");
    scanf("%lf",&num2);
    printf("Sum: %f + %f = %f\n",num1,num2, num1+num2);
    printf("Difference: %f - %f = %f",num1,num2, num1-num2);
}
