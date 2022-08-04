#include <stdio.h>

int findMax()
{
int x;
int y;
printf("Enter the number of X :\n");
scanf("%d", &x);
printf("Enter the number of Y :\n");
scanf("%d", &y);

return (x > y) ? x : y;



}

int findMin(){
int x;
int y;

return (x < y) ? x : y;

}



int main (){


int max = findMax();
int min = findMin();


printf("Max = %d ", max);
printf("Min = %d", min);



return 0;


}