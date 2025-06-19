#include <stdio.h>
#include <conio.h>

int main()
{
    double num1, num2, divide;
    printf("enter the value");
    scanf("%lf", &num1);
    printf("enter the value");
    scanf("%lf", &num2);

    divide = num1 / num2;
    printf("%2lf", divide);
    
    return 0;
}