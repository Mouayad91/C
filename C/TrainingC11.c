#include <stdio.h>


int main () {



    double price[3][3] = {
                        {19.99, 4.99, 2.99},
                        {10.99, 8.99 , 7.99},
                        {12.99, 3.99 , 5.99}

                        };


for(int i = 0; i < 3; i++){

{
for(int j = 0 ; j < 3; j++){


    printf("$%.2lf \t", price[i][j]);
}

printf("\n");

}
}





}