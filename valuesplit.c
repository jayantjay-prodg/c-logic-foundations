#include<stdio.h>

 int main (){

    int n;
    printf(" enter no: ");
    scanf( " %d", &n);

    int odd_sum=0;
    int even_sum=0;

    for(; n>0 ; n=n/10){

        int digit= n%10;

        if(digit%2==0){

            even_sum+=digit;
        }
        else{
            odd_sum+=digit;

        }
    }
        printf(" even sum is= %d \n", even_sum);
        printf(" odd sum is= %d \n", odd_sum);
        return 0;


    }

