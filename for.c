#include <stdio.h>
#include <conio.h>

int main()
{
    int num1;
    printf("enter a number");
    scanf("%d", &num1);
    int i, table;
    for(i = 1; i <=10; i++){
        table = num1*i;
        printf("%d\n", table);
    }
    return 0;
}