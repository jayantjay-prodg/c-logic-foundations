#include<stdio.h>

 int main(){
    int n;
    printf("enter 3 digit no: ");
    scanf(" %d", &n);

    if (n>=100 && n<=999){
        int d3= n%10;
        n= n/10;
        int d2= n%10;
        n= n/10;
        int d1= n%10;

        printf(" reversed no. is: %d \n", d3*100+d2*10+d1 );
    }
    else {
        printf("not a three digit no.");
    }
    return 0;
 }