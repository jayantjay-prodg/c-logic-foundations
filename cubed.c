#include<stdio.h>
 
int main(){

    int code;
    printf("enter 3 digit code: ");
    scanf(" %d", &code);

    if( code>= 100 && code<=999){

        int d3= code%10;
        int code3= code/10;

        int d2= code3%10;
        int code2= code3/10;

        int d1= code2%10;
        
        int cube3= d3*d3*d3;
        int cube2= d2*d2*d2;
        int cube1= d1*d1*d1;

        int addedcube = cube3+cube2+cube1;

        if( addedcube== code){
            printf("core stable");
    
        }
        else{
            printf(" core unstable");
        }
        
    }
    else{
        printf("not a 3 digit code");
    }

    return 0;



}