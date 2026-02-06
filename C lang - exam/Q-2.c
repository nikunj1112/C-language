// Q-2) Develop a C program that reads a sentence from the user. 
// Create a function to count the occurrences of each vowel in the sentence and display the counts.

#include <stdio.h>

void countVowels(char *sentence) {
    int count[5] = {0}; // a, e, i, o, u

    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = sentence[i];
        if (ch == 'a' || ch == 'A') {
            count[0]++;
        } else if (ch == 'e' || ch == 'E') {
            count[1]++;
        } else if (ch == 'i' || ch == 'I') {
            count[2]++;
        } else if (ch == 'o' || ch == 'O') {
            count[3]++;
        } else if (ch == 'u' || ch == 'U') {
            count[4]++;
        }
    }

    printf("Vowel counts:\n");
    printf("a: %d\n", count[0]);
    printf("e: %d\n", count[1]);
    printf("i: %d\n", count[2]);
    printf("o: %d\n", count[3]);
    printf("u: %d\n", count[4]);
};

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countVowels(sentence);

    
};

