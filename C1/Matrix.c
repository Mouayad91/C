#include <stdio.h>
#include <stdlib.h>

void *print_matrix (){

    int array[5][3]={{2, 18, 1},
                    {27 , 16 , 24},
                    {12, 18 ,9},
                    {5, 10 , 22},
                    {8, 7, 14}};

for (int i = 0 ; i < 5 ; i++){
{

for (int j=0 ; j < 3; j++ )

printf("%d\t", array[i][j]);

}
printf("\n");
}


}


int *find_max_in_col(int array[5][3]){

int max;
for (int i = 0 ; i<5;i++){
    for(int j=0; i<3;j++){

        if(array[i][j] > max)
        max = array[i][j];
 printf("\nMax =%d\n", max);

    }
}
}






int main (){


print_matrix();


        


}