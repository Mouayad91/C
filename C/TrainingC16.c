#include <stdio.h>


int main (){

FILE *file = fopen ("Z-MakeFile.txt", "a");

fprintf(file , "One day i will make so many video games and be rich LOL,and maybe i will have my own game studio");

fclose(file);

return 0;

/*if(remove("Z-MakeFile.txt") == 0){

printf ("File has been deleted!");


}else{


    printf("File has not been found!!");
}
*/
}