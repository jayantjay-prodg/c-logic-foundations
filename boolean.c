#include<stdio.h>

 int main (){

    int n;
    printf("enter number :");
    scanf(" %d", &n);

    int bucket=0;

    for (int i = 1; i<=n; i++){

        if(i%3==0 || i%5==0){

            bucket=bucket+i;

        }
    }
    printf("sum is : %d \n", bucket);

    return 0;
 }