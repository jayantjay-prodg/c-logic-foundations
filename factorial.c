#include <stdio.h>

int main()
{

    int fac;
    printf(" enter number: ");
    scanf(" %d", &fac);

    if (fac > 0)
    {

        int product = 1;

        for (int i = 1; i <= fac; i++){
            
        product = product * i;
        }
        printf(" factorial is : %d \n", product);

    }
    return 0;
}