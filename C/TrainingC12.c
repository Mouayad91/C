#include <stdio.h>
#include <string.h>


int main (){


 char name[][10] = {"Mouayad","Ahmad","Monzer","Sadek"};

    strcpy (name[3], "Muthanna");

    for( int i = 0; i < sizeof(name)/sizeof(name[0]); i++){

        printf ("%s\t",name[i]);



    }




}