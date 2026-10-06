#include<stdio.h>
int main(){
    int rupees;
    printf("enter rupee: ");
    scanf("%d", &rupees);

    note500= rupees/500;
    left_money= rupees%500;
    note100= left_money/100;
    left_money2= left_money%100;
    note50= left_money2/50;
    left_money3= left_money2%50;
    note10= left_money3/10;
    left_money4= left_money3%10;

    printf("500 note:\n 100 note: \n 50note: \n10note: ",note500, note100, note50 ,note10); )
}