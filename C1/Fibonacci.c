#include <stdio.h>
#include <stdlib.h>

int fibo(int n){

int i1 = 1 , i2 = 1;
int fibNum = 0;
if (n == 1 || n == 2) {

    return 1;
}
else{
    for (int i = 0; i <= n-2; i++)
    {
        fibNum = i1 + i2;
        i1 = i2;
        i2 = fibNum;
    }
    return fibNum;





}





}



int main(){

    printf("Enter a number: \n");
    int n = 0;
    scanf ("%d", &n);


    fibo(n);
    printf("Fibonacci = %d",fibo(n));



}