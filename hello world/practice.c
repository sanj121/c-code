/// Write a C program to input any alphabet and check whether it is vowel or consonant
#include <stdio.h>
int main()
{
    char vow;
    printf("enter the letter which you want to check :");
    scanf("%c", &vow);
    if (vow == 'a' || vow == 'e' || vow == 'i' || vow == 'o' || vow == 'u' ||
        vow == 'A' || vow == 'E' || vow == 'I' || vow == 'O' || vow == 'U')
    {
        printf("it is a vowel %c", vow);
    }
    else
    {
        printf("it is a consonent");
    }
    return 0;
}