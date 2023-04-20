#include <stdio.h>

int main()
{
    char colour;

    printf("Enter the colour of the light = \n");
    scanf("%c", &colour);

    switch (colour)
    {

    case 'r':
    case 'R':
        printf("STOP! \n");
        break;

    case 'y':
    case 'Y':
        printf("Ready \n");
        break;

    case 'g':
    case 'G':
        printf("GO! \n");
        break;

    default:
        printf("The colour is not valid.\n");
    }

    return (0);
}
