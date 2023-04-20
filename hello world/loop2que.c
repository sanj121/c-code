/// wap to take an input from user and print your name that many times
#include <stdio.h>
int main()
{
    int n, i;
    printf(" number of times you want to print my name:");

    scanf("%d", &n);

    while (i <= n)
    {
        printf("(%d)Sanjeet\n",i);
        i++;
    }

    return 0;
}