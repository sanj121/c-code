/// wap to take a user input n and print odd or enen from 1 to n in c language
#include <stdio.h>

int main()
{
    int n;
    printf("enter a number ");
    scanf("%d ",&n);
    if (n % 2 != 0)
    {
        printf("%d is odd number", n);
    }
    else
    {
        printf("it is an even number");
    }
    return 0;
}
