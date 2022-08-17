#include <stdio.h>
#include <stdlib.h>

int main (){

printf ("Enter a Number : \n");
int n = 0;
scanf ("%d", &n);
int sum = 0;
for (int i = 1; i <= n; i=i+3)
sum +=i;
printf ("%d", sum);




}