//wap to find out the factorial of a number with taking input from user
// #include<stdio.h>
// int main()
// {
//     int n;
//     int a=0,b=1,c;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//     printf("%d\t",a);
//     c=a+b;
//     a=b;
//     b=c;
//     }
//     return 0;
// }


//wap to call a function having days name and with sum of two number
// #include<stdio.h>  
// void sum(int, int);  
// void main()  
// {  
//     int a,b;     
//     printf("Enter two numbers:\n");  
//     scanf("%d %d",&a,&b);  
//     sum(a,b);  
// }  
// void sum(int a, int b)  
// {  
//     printf("The sum is %d",a+b);      
// } 


//wap to call a function having days name of a week
#include<stdio.h>
void daysofweek(){
    char daysofweek[7]={"Monday","tuesday","thrusday","wednesday","friday","saturday","sunday"};
    for(int i=0;i<7;i++ ){
        printf("%c",daysofweek[i]);
        // i++;
    }
    // printf("\n");
}
int main()
{   daysofweek();






    return 0;
}