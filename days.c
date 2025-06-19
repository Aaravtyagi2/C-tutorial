#include <stdio.h>
#include <conio.h>

int main()
{
        int days;
        printf(" days(0-7)");
        scanf("%d", &days);
        switch (days)
        {
        case 1 :printf("monday");
        break;
        case 2 :printf("tuesday");
        break;
        case 3 :printf("wednesday");
        break;
        case 4 :printf("thursday");
        break;
        case 5 :printf("friday");
        break;
        case 6 :printf("saturday");
        break;
        case 7 :printf("sunday");
        break; 
        case 8 :printf("default");
        break;
        }
        return 0;



}