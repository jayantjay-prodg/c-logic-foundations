#include<stdio.h>
 int main (){

   int k;
   printf(" enter no :");
   scanf(" %d", &k);

   for(int i=1; i<=10 ; i++){

    printf(" %d x %d = %d \n", k,i,k*i);
   }
   return 0;

 }