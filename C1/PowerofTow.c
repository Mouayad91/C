#include <stdio.h>
#include <stdlib.h>

double power (int a, int b){

int result = 1;
for (int i = 0; i < b; i++){

    result = result * b;

}

return result;

}
int main (){

printf("Enter a Number :\n");

int n = 0;

scanf ("%d", &n);


printf ("%d^2 = %lf\n", n , power(n , 2));
printf ("%d^%d = %lf\n", n ,n, power(n , n));



}

