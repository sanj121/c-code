///que.wap to check wheather an alphabet is vowel or consonant using switch case
#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter an alphabet = \n");
    scanf("%c", &alphabet);

    switch (alphabet)
    {

    case 'a':
    case 'A':
        printf("it is vowel");
  #include <stdio.h>

int main() {
    int n;
    int i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Even numbers: ");
    for(i=1; i<=n; i++) {
        if(i%2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\nOdd numbers: ");
    for(i=1; i<=n; i++) {
        if(i%2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
      break;

    case 'e':
    case 'E':
        printf("it is vowel");
        break;

    case 'i':
    case 'I':
        printf("it is vowel \n");
        break;

    case 'o':
    case 'O':
        printf("it is vowel \n");
        break;

    case 'u':
    case 'U':
        printf("it is vowel \n");
        break;

    default:
        printf("it is a consonat\n");
    }
    
    return (0);
}
