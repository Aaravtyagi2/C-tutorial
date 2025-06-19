#include <stdio.h>
#include <conio.h>

int main()

{
    int rem, sum=0, num;
    printf("enter a digit\n");
    scanf("%d", &num);
    while (num!= 0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        

    }
    printf("%d", sum);
    return 0;
}