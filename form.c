#include <stdio.h>
#include <conio.h>

int main()
{
    char name [20] , address [242];
    double mobile_number;
    int age;
    

    printf("enter the name");
    scanf("%s", &name);
    printf("enter the address");
    scanf("%s", &address);
    printf("enter your mobile_number");
    scanf("%lf", &mobile_number);
    printf("enter your age");
    scanf("%d", &age);

    printf("%s", name);
    printf("%S", address);
    printf("%2lf", mobile_number);
    printf("%d", age);

    return 0;
}