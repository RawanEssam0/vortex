#include <stdio.h>

void main()
{
    double num1, num2,num3,sum;
    printf("Enter first number: ");
    scanf("%lf",&num1);
    printf("Enter second number: ");
    scanf("%lf",&num2);
    printf("Enter third number: ");
    scanf("%lf",&num3);
    sum= num1+num2+num3;
    printf("Sum of three numbers = %f\n", sum);
    printf("Average of three numbers = %f\n",sum/3);

}
