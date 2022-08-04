#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Number Guessing Game

int main (){

    const int MIN = 1;
    const int MAX = 20;
    int guess;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do{

        printf("Enter your Number :");
        scanf ("%d", &guess);

  if (guess > answer)
  {
    printf ("Too high\n");
  }else if( guess < answer){
    printf("Too low\n");


  }else{

    printf("Correct answer\n");

  }}

    while (guess != answer);
    {
    printf("-------------------\n");
    printf("Answer: %d\n", answer);
    printf("-------------------");


    }
    
    }
    


    




