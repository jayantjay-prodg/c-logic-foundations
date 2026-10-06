#include <stdio.h>
int main()
{

  int a, b;
  printf("enter a: , enter b: ");
  scanf("%d %d", &a, &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("swapped value is:%d %d ", a, b);
}