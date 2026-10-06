#include <stdio.h>

int main()
{

    int n;
    printf("enter no: ");
    scanf(" %d", &n);

    int even_num= 0;
    int odd_num=1;

    for(; n>0 ; n=n/10){

        int digit= n%10;
        if(digit%2==0){

            even_num+=digit;


        }
        else{

            odd_num*=digit;
        }
    }
    printf(" even total is : %d \n", even_num);
    printf(" odd total is : %d \n", odd_num);

    return 0;

}