#include <stdio.h>
/*int main() {
typedef int Temperature;
Temperature fahrenheit = 53;
Temperature celsius;
celsius = 5 * (fahrenheit - 32) / 9;
printf("%d F is %d C\n", fahrenheit, celsius);
return 0;
}
*/

int main (){

float celsius, fahrenheit;

printf("Enter your temperature in Celsius : \n");
scanf("Your tepmerature in celsius is ; %f", &celsius );
fahrenheit = (celsius * 9/5) + 32;
printf("Your temperature in Fahrenheit is : %.f", fahrenheit);

return 0;

}