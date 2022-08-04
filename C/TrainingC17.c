#include <stdio.h>

int main () {

    FILE *file = fopen("C:\\Users\\Mouay\\Desktop\\test.txt", "r");


    char buffer[255];

    if (file == NULL){

        printf(" Could not open the file");


    }else {

    fgets(buffer, 255 , file);
    printf("%s", buffer);


    }

    
    fclose(file);


    return 0;

}