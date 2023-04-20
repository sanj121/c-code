///wap to find addition of first 10 odd number in c language
#include <stdio.h>

int main() {
    int num1 = 0;
    int num = 1;
    int sum = 0;

    while(num1 < 10) {
        sum += num; 
        num += 2; 
        num1++;
    }

    printf("The sum of the first 10 odd numbers is: %d", sum);

    return 0;
}
