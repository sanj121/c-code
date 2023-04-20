#include <stdio.h>
int main()
{
    int num;
    printf("eneter the  number= ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("the number %d is positive",num);
    }
    else if(num==0)
    {
        printf("the number %d is nither negative nor positive",num);
    }
        else
        {
            printf("the number %d is negative",num);
        }
    

    return 0;
}