#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    char ch = 'A';

    printf("enter the number rows:\n");
    scanf("%d", &num);

    int i, j, space;
    for (i = 1; i <= num; ++i)
    {
        for (space = 1; space <= num - i; ++space)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; ++j)
        {
            printf("%C ", ch);
            ch++;
        }

        printf("\n");
    }
    return 0;
}