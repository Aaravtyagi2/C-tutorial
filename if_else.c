#include <stdio.h>
#include <conio.h>

int main()
{
    int age;

    printf("enter your age");
    scanf("%d", &age);
    if(age < 18){
        printf("not eligible for voting");
    }else{
        printf("eligible for voting");
    }

    return 0;

}


