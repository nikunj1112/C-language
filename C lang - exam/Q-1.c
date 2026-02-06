// Q-1) Write a C program that prompts the user to enter an integer. 
//Using a loop, calculate and display the factorial of that number.

#include <stdio.h>

void main() {
    int num, factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error....! Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }
    
};



