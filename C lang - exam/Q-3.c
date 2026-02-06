// Q-3) Create a C program that defines a function to check if a given number is a leap year or not.

#include <stdio.h>

void checkLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { // 2024 % 4 == 0 → true
        printf("%d is a leap year...\n", year);
    } else {
        printf("%d is not a leap year...\n", year);
    }
};

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    checkLeapYear(year);

};



