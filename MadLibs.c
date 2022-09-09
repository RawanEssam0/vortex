#include <stdio.h>
void main()
{
char color[20], adj[20], animal[20],place[20],celeb[20];
printf("Enter a color: ");
gets(color);
printf("Enter an adjective: ");
gets(adj);
printf("Enter an animal: ");
gets(animal);
printf("Enter a place : ");
gets(place);
printf("Enter a celebrity name: ");
gets(celeb);
printf("\nThe sky is %s\n",color);
printf("My partner should be %s\n",adj);
printf("My brother looks like a %s\n",animal);
printf("I enjoyed last night at %s\n",place);
printf("%s is my celebrity role model",celeb);
}
