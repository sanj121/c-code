/// Beverage chooser
// CHai / Coffee -
///   chai
// ginger tea
// black tea
// lemon tea
// iced tea
////////////////// Coffee
//  - hot : Cappuccino, Latte, Mocha, Americano, Black,
//  - cold - Cold Coffee, Iced Mocha,


#include<stdio.h>

// function
int isEven(int count) {
    if (count % 2 == 0) {
        return 1;
    }
    return 0;
}


int main() {
    printf("Welcome to Coding Cafe\n");
    printf("How many orders do you want to place : \n");
    char answer; // variable, data type
    int orders = 0;
    scanf("%d", &orders);

    //input

    //conditionals
    char coffeeOption;
    char teaOption;
    int cCount = 0;
    int lCount = 0;
    int mCount = 0;
    int aCount = 0;
    int gCount = 0;
    int bCount = 0;
    int iCount = 0;
    // output

    int i = 0;
    while (i < orders) {
        printf("What will you have : Press T for Tea or C for Coffee B for Both:\n");
        scanf(" %c", &answer);

        if (answer == 'C') {
            printf("Which coffee would you like to have. Press C for Cappuccino, A for Americano, L for Latte, M for Mocha\n");
            scanf(" %c", &coffeeOption);
            switch (coffeeOption) {
                case 'C' :
                    cCount = cCount + 1;
                    break;
                case 'A' :
                    aCount = aCount + 1;
                    break;
                case 'L' :
                    lCount++;
                    break;
                case 'M' :
                    mCount++;
                    break;
                default:
                    printf("Please select a valid option.");

            }


        } else if (answer == 'T') {
            printf("Which Tea would you like to have. Press G for Ginger Tea, I for Iced Tea, B for Black Tea\n");
            scanf(" %c", &teaOption);
            switch (teaOption) {
                case 'G' :
                    gCount++;
                    break;
                case 'I' :
                    iCount++;
                    break;
                case 'B' :
                    bCount++;
                    break;
                default:
                    printf("Please select a valid option.");

            }
        } else {

        }

        i++;

    }

    printf("Your final order is : \n");


    printf("COFFEE : cappuccino - %d americano - %d mocha - %d latte - %d\n", cCount, aCount, mCount, lCount);

    printf("TEA : ginger tea - %d black tea - %d iced tea - %d\n ", gCount, bCount, iCount);

    if (isEven(cCount + aCount + mCount + lCount)) {
        printf("Congratulations, you got a discount of 10%");
    } else {
        printf("Congratulations, you got a discount of 5%");
    }
    return 0;

}


// alphabets, special characters
// variables
// reserved keyword
// operator
// 0-9
//input
//output
// data types
// conditionals
// loops
//functions
// file handling