#include <stdio.h>
#include <string.h>

int main(){

char name[] = "Mouayad";
char job[] = "Game Developer";

strlwr (name);
printf("%s\n", name);

strupr(job);
printf("%s\n", job);

strcat (name, job);
printf("%s \n", name);

strncat(name, job ,6);
printf("%s", name);

strcpy(name,job);
printf("%s", name);

strset(name,'Y');
printf("%s", name);


}