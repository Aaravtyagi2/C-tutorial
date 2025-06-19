#include <stdio.h>

int main()
{
    int num;
    printf("Enter number of rows:\n");
    scanf("%d", &num);
    
    int i, j, space;
    for (i = 1; i <= num; ++i)
    {
        // Print spaces
        for (space = 1; space <= num - i; ++space)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; ++j)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
