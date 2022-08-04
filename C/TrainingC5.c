#include <stdio.h>
#include <string.h>

int main (){

    char name[30];
    int age;
    char study[25];
    char hobby[25];

    printf ("Hello, What is your name?\n");
    fgets (name, 30, stdin);
    name [strlen(name)-1] = '\0';
    printf("How old are you?\n");
    scanf ("%d", &age);
    printf ("What are you studying?\n");
    scanf ("%s", &study);
    printf ("What is your hobby?\n");
    scanf("%s", &hobby);
    hobby [strlen(hobby)-1]= '\0';
    printf("So your name is %s and you are %d years old , and you are currently studying %s, and your favorite hobby is %s", name, age,study,hobby);



return 0;

}