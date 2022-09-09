#include <stdio.h>

void main()
{
    float firstnum,secondnum ;
    char op;
    printf("Enter first number: ");
    scanf("%f",&firstnum);
    printf("Enter an operation (+,-,*,/): ");
    scanf(" %c",&op);
    printf("Enter second number:");
    scanf("%f",&secondnum);
    if(op=='+')
        printf("%.3f + %.3f = %.3f",firstnum,secondnum,firstnum+secondnum);
    else if(op=='-')
        printf("%.3f - %.3f = %.3f",firstnum,secondnum,firstnum-secondnum);
    else if(op=='*')
        printf("%.3f * %.3f = %.3f",firstnum,secondnum,firstnum*secondnum);
    else if(op=='/')
        printf("%.3f / %.3f = %.3f",firstnum,secondnum,firstnum/secondnum);
    else
        printf("Invalid operation");


}
