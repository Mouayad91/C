#include <stdio.h>
#include <stdlib.h>

int main () {

printf("Enter a number :\n");
int n= 0;
scanf ("%d", &n);

int sumEven = 0;
int sumOdd = 0;

for (int i = 1; i <=n ; i = i + 2)

if(i%2 == 0)

sumEven = sumEven + i;
else
sumOdd = sumOdd + i;

printf ("%d\n", sumEven);
printf ("%d", sumOdd);

return 0;

}