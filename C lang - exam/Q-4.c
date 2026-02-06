// Q-4) Write a C program that uses pointers to swap the values of two integers.
// Implement a function for the swapping operation.

#include <stdio.h>

void swapInteger(int *n, int *r){
    
    int temp;
    temp = *n;
    *n = *r;
    *r = temp;
};

int main() {
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First integer  = %d\n", num1);
    printf("Second integer = %d\n", num2);

    swapInteger(&num1, &num2);

    printf("\nAfter swapping :\n");
    printf("First integer  = %d\n", num1);
    printf("Second integer = %d\n", num2);

};




// #include <stdio.h>

// void swapInteger(int *a, int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int num1, num2;

//     printf("Enter first integer: ");
//     scanf("%d", &num1);

//     printf("Enter second integer: ");
//     scanf("%d", &num2);

//     printf("\nBefore swapping:\n");
//     printf("First integer  = %d\n", num1);
//     printf("Second integer = %d\n", num2);

//     swapInteger(&num1, &num2);

//     printf("\nAfter swapping :\n");
//     printf("First integer  = %d\n", num1);
//     printf("Second integer = %d\n", num2);

//     return 0;
// }