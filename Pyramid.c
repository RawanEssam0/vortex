#include <stdio.h>

void main()
{
    int i,height;
    char arr[5][10]= {"    *    ","   ***   ","  *****  "," ******* ","*********"};
    printf("Enter height of pyramid you want(min 2- max 5): ");
    scanf("%d",&height);
    for(i=0; i<height; i++)
    {
        printf("\n%s",arr[i]);
    }
}
