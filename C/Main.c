#include <stdio.h>

int main () {


int i;
int d,m,y;
float f;


printf ("Enter an Integer:");
scanf("%d", &i);
printf ("Your Input is: %d \n", i);

printf("Enter a Float:");
scanf("%f", &f);
printf("Your Input is : %f \n", f);

printf("Enter a date in the Format dd:mm:yy: ");
scanf("%2d:%2d:%4d", &d,&m,&y);
printf("Your Birthday is : %2d:%2d:%4d \n", d,m,y);

}