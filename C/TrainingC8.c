#include <stdio.h>

void vidoGames(char game[] , char engine[], int version){

    printf ("Your Favorite Video Game is %s %d", game,version);
    printf(",and i know you like to use the %s of Fallout %d", engine, version);


}

int main (){

    char game[]="Fallout";
    char engine[]="Creation Engine";
    int version =4;
vidoGames(game, engine, version);


}