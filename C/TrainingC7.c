#include <stdio.h>


int main () {

    double num1;
    double num2;
    double result;
    char op;

  
  printf ("Enter the Operation you want to do (* , / , + , -) : \n");
    scanf("%c", &op);

    printf ("Enter your first number :\n");
    scanf("%lf", &num1);

    printf("Enter your second number :\n");
    scanf ("%lf", &num2);


    

    switch (op)
    {
    case '+':

    result = num1 + num2 ;
    printf("Result = %lf", result);
break;

    case '-':
    result = num1 - num2;
    printf("Result = %lf", result);
    
break;

    case '*':
    result = num1 * num2 ;
    printf("Result = %lf", result);

break;

    case '/':
    result = num1 / num2 ;
    printf("Result = %lf", result);



break;
    
    default:

    printf ("Please Enter a valid Operation (- * + / )");
        break;
    } 

    }







