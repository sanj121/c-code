
#include <stdio.h>
int main()
{
    char a;
    printf("enter the light colour which you want=");
    scanf("%c",&a);
    if (a == 'R')
    {
        printf("stop  ");
    }
    else if (a == 'G')
    {
        printf("GO    ");
    }
    else if (a == 'Y')
    {
        printf("wait");
    }
    else
    {
        printf("invalid option    ");
    }
    return 0;
}
// #include<stdio.h>
// int main () {
//     printf("IT IS A TRAFFIC LIGHT.\n") ;
//     printf("SO FOR STOP PRESS - R , FOR GO PRESS - G AND FOR READY PRESS - Y.\n") ;
//     printf("NOTE - CAPITAL LETTERS ONLY.\n") ;
//     char a ;
//     scanf("%c",&a) ;
//     if (a=='R') {
//         printf("STOP") ;
//     }
//     else if (a=='G') {
//         printf("GO") ;
//     }
//     else if (a=='Y') {
//         printf("READY") ;
//     }
//     else {
//         printf("INVALID INPUT") ;
//     }
//     return 0 ;
// }