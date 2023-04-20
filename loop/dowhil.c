// #include <stdio.h>
 
// int main()
// {
//     int rows;
 
//     printf(" Numbers ");
//     scanf("%d", &rows);
 
    
 
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = i; j <= rows; j++)
//         {
//             printf("%d ", j);
//         }
//         for (int k = 1; k < i; k++)
//         {
//             printf("%d ", k);
//         }
//         printf("\n");
//     }
// }



#include<stdio.h>
 
int main(){
    int side, i, j;
     
    printf("enter the number");
    scanf("%d", &side);
    int k = 1;
    
    for(i = 1; i <= side; i++){
    
        for(j = 1; j <= side; j++){
           k++;
           if(k%2!=0)
           {
                printf("e");
           }
           else{
                printf("o");
           }
        }
        printf("\n");
    }
    return 0;
}