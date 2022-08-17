#include <stdio.h>
#include <stdlib.h>


int main (){

printf ("Enter a number : \n");
int n = 0;
scanf ("%d", &n);

int sum = 1; // 1 is a divisor
for (int i = 2 ; i <= n/2; i++)

if (n%i == 0)
sum = sum + i;

printf((sum==n) ? "It is a perfect Number" : "It is not a perfect Number");


}