#include <stdio.h>
#include <string.h>


typedef struct 
{
    char name[25];
    char grade;
    int sem;
}student;

int main(){


 student st1 = {"Mouayad", 'A' , 6 };

 printf ("\nStudent Name: %s\n Final Grade: %c\n Semester: %d", st1.name,st1.grade,st1.sem);


}
