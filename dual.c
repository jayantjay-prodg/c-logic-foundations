#include <stdio.h>

int main()
{
 int n;
 printf(" enter no: ");
 scanf( " %d", &n);

  int is_odd=0;
  int is_even=0;

  for( int i =1 ; i<=n ; i++){

    if(i%2==0){
        is_even= is_even+i;
        
        
    }
    else{
        is_odd+=i;
        
    }
    
  }
  printf(" even sum is : %d \n ", is_even);
  printf(" odd sum is : %d \n ", is_odd);
  return 0;





}