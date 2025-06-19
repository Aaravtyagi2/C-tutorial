#include <stdio.h>
#include <conio.h>

int main()
{
    double num1, num2, multiply;
    printf("enter the value");
    scanf("%lf", &num1);
    printf("enter the value");
    scanf("%lf", &num2);

    multiply = num1 * num2;
    printf("%2lf", multiply);

    return 0;
}