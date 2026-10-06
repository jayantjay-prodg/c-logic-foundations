#include<stdio.h>

 int main (){

    int n;
    printf(" enter no: ");
    scanf( " %d", &n);

    int even_pos_sum=0;
    int odd_pos_sum=0;
    int pos=1;

    for(; n>0 ; n=n/10){

        int temp= n%10;

        if(pos%2==0){

            even_pos_sum+=temp;
        }
        else{

            odd_pos_sum+=temp;
        }
        pos++;
    }

    int diff= even_pos_sum - odd_pos_sum;

    if(diff%11==0){
        printf( " divisible ");
    }
    else{
        printf(" nope");
    }
    return 0;



    
    
 }