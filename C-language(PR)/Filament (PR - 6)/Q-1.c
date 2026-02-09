// Q.1 Palindrome Checker
// Develop a program that checks whether a given string is a palindrome or not without using string functions.

#include <stdio.h>

int main()
{
    char str[100];                      // Assuming a maximum string length of 99 characters + null terminator
    int i = 0, j = 0, isPalindrome = 1; // isPalindrome is initialized to 1 (true)

    printf("Enter a string: "); // Prompt the user to enter a string
    scanf("%s", str);           // Read the input string

    while (str[j] != '\0')
    {        // Find the length of the string by iterating until the null terminator
        j++; // Increment j to count the characters in the string
    }
    j = j - 1; // Set j to the index of the last character in the string (excluding the null terminator)

    while (i < j)
    { // Compare characters from the start and end of the string
        if (str[i] != str[j])
        {                     // If characters do not match, it's not a palindrome
            isPalindrome = 0; // Set isPalindrome to 0 (false) if a mismatch is found
            break;            // Exit the loop early since we already know it's not a palindrome
        }
        i++; // Move to the next character from the start
        j--; // Move to the next character from the end
    }

    if (isPalindrome)
    {                                            // If isPalindrome is still 1 (true), then the string is a palindrome
        printf("The string is a Palindrome.\n"); // Output that the string is a palindrome
    }
    else
    {
        printf("The string is NOT a Palindrome.\n"); // Output that the string is not a palindrome
    }
}