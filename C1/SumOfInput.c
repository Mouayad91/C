#include <stdio.h>
#include <stdlib.h>


int main () {

int n = 0;
int sum = 0;


do {

    printf ("Enter a number :\n");
    scanf ("%d", &n);
    sum += n;
    printf("Sum = %d\n", sum);

} while ( sum < 500);

printf ("\nOut of Loop");
return 0;




}