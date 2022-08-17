#include <stdio.h>
#include <stdlib.h>


int main (){


printf ("Enter a number : \n");
int n=0;

scanf("%d", &n);
int min = n;
int max = n;

for (int i = 1; i <=9; i++){

scanf("%d", &n);

    min = (n < min)? n : min;
    max = (n > max)? n : max;



}

printf ("Min = %d , Max = %d", min , max);


return 0;
}