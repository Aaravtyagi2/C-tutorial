#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t1 = 0, t2 = 1, sum;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {

        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
        printf("%d\n", sum);
    }

    return 0;
}
