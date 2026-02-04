#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int count = 0;

    printf("Enter any string: ");

    scanf("%[^\n]s", str); // Read string with spaces

    ptr = str;

    while (*ptr != '\0') // Traverse until null terminator
    { 
        count++;
        ptr++;
    }

    printf("The length of a string is: %d\n", count);

    return 0;
}