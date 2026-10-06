#include<stdio.h>

int main (){

    int limit;
    printf(" enter positive integer: ");
    scanf(" %d", &limit);
    int sum= 0;

    if (limit>0){

        for(int i=1;  i<=limit ; i++){

            sum= sum +i;

            
        }
        printf(" TOTAL : %d \n", sum);
    }

    else{ printf(" not positive");
        return 0;

    }
}