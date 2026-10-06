#include<stdio.h>

int main(){
    int total_seconds;
    printf("enter seconds: ");
    scanf("%d", &total_seconds);
    h= total_seconds/3600
    left_seconds= total_seconds%3600
    m= left_seconds/60
    s= left_seconds%60
    printf("%d hours:%d mins:%dseconds",h,m,s);
}