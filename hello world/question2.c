///WAP to print day name using switch case
#include <stdio.h>

int main()
{
    int day;

    printf("Enter the day of the light = \n");
    scanf("%d", &day);

    switch (day)
    {

    case 1:
    
        printf("monday");
        break;

    case 2:
    
        printf("tuesday\n");
        break;

    case 3:
    
        printf("wednesday\n");
        break;

    case 4:
        printf("thrusday \n");
        break;

    case 5:
        printf("friday \n");
        break;

    case 6:
        printf("saturday \n");
        break;
    case 7:
        printf("sunday \n");
        break;
    
    default:
        printf("The day is not valid.\n");
    }

    return (0);
}