#include <stdio.h>
#include <math.h>


int main () {


double a, b ,c;

printf ("Enter your a value : \n");
scanf("%lf", &a);
printf ("Enter your b value :\n");
scanf("%lf", &b);

c = sqrt(a*a + b*b);

printf("C = %lf", c);



}