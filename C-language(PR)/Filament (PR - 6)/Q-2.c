// Q.2 Frequency Counter
// Extend the program to count the frequency of each character in a given string.

#include <stdio.h>

int main()
{                        // Main function where the program execution starts
    char str[200];       // Assuming a maximum string length of 199 characters + null terminator
    int freq[256] = {0}; // Array to hold frequency of each character (ASCII values)
    int i = 0;           // Index variable for iterating through the string

    printf("Enter any string: "); // Prompt the user to enter a string
    scanf("%s", str);             // Read the input string

    while (str[i] != '\0')
    {                        // Iterate through the string until the null terminator is reached
        freq[(int)str[i]]++; // Increment the frequency count for the ASCII value of the current character
        i++;                 // Move to the next character in the string
    }

    printf("\nFrequency of each character:\n"); // Print the header for the frequency output

    for (i = 0; i < 256; i++)
    { // Iterate through the frequency array to print the frequency of each character
        if (freq[i] > 0)
        {                                    // Only print characters that have a frequency greater than 0
            printf("%c = %d\n", i, freq[i]); // Print the character and its corresponding frequency
        }
    }
}