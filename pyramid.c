#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("enter a rows\n");
    scanf("%d", &num);
    int i,j;
    for(i= 0; i <=num; i++){
    for(j= 0; j <=i; j++) 
    {
        printf("*");
    } 
    printf("\n"); 
    }
    return 0;
}
