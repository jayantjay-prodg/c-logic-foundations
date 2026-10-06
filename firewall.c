#include <stdio.h>

int main()
{
    int clearance_level, login_attempts;
    printf("clearance level: , login attempts: ");
    scanf(" %d  %d", &clearance_level, &login_attempts);

    if (clearance_level >= 1 && clearance_level <= 10)
    {
        if (clearance_level == 10 && login_attempts < 5)
        {
            printf("access granted");
        }

            else if (login_attempts < 3)
            {
                printf("access granted");
            }
            else{ printf("acc locked");
            }
        }

    else
    {
        printf("acc locked");
    }
    return 0;
}