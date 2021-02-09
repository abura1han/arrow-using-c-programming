#include <stdio.h>

int main()
{
    int space = 25;
    for (int i = 0; i <= 25; i++)
    {
        for (int s = 0; s <= space; s++)
        {
            printf(" ");
        }
        space--;

        for (int a = 0; a <= i; a++)
        {
            printf(". ");
        }
        
        if (i == 25)
        {
            for (int s = 0; s < 100; s++)
            {
                if (s % 5 == 0)
                {
                    printf("\n");
                    printf("\t\t      ");
                }
                printf(". ");
            }
        }
        printf("\n");
    }

    return 0;
}