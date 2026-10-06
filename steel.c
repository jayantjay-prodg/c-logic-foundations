#include <stdio.h>

int main()
{
    int hardness, tensile;
    float carbon;
    printf("enter hardness: , enter tensile: , enter carbon");
    scanf("%d %d %f", &hardness, &tensile, &carbon);

    if (hardness > 50 && carbon < 0.7 && tensile > 5600)
    {

        printf(" Grade 10");
    }
    else if (hardness > 50 && carbon < 0.7)
    {
        printf("grade 9");
    }
    else if (carbon < 0.7 && tensile > 5600)
    {
        printf("grade 8");
    }
    else if (hardness > 50 && tensile > 5600)
    {
        printf("grade 7");
    }
    else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
    {
        printf("grade 6");
    }

    else
    {
        printf("grade 5");
    }
    return 0;
}
