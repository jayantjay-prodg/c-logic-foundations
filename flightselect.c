#include <stdio.h>

int main()
{
    int height, weight;
    printf("enter height: , enter weight: ");
    scanf(" %d %d", &height, &weight);

    if (height >= 160 && height <= 190)
    {

        if (height == 190 && weight < 90)
        {
            printf("select");
        }
        else if (weight < 85)
        {
            printf("select");
        }
        else
        {
            printf(" reject");
        }
    } 
    else{
        printf("reject");
    }
    return 0;

}
