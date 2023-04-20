#include <stdio.h>
int main()
{
    float total;
    float num3;
    printf("enter your marks obtained \n");
    scanf("%f", &total);
    num3 = ((total * 100) / 20);
    if (num3 >= 90)
    {
        printf("it is a good percentage %.2f\n", num3);
    }
        if (num3 >= 80 && num3 < 90)
        {
        printf("it is an average percentage %.2f\n", num3);
        }
            if(num3 >= 0 && num3 < 80)
            {
                printf("it is not a good percentage %.2f", num3);
            }

    return 0;
}