#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
    int n;
    printf ("Enter a number :\n");
    scanf("%d", &n);

    bool isPrime = true;
    for (int i = 2 ; i < n/2; i++)

    if (n%i == 0){

    isPrime = false;
    break;

    }






    printf("The number is%s", ((isPrime)? " prime.": " not prime."));






}