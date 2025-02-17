#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Taking input
    scanf("%c", &ch);

    // Checking the type of character
    if (isalpha(ch)) {
        // Convert to lowercase to simplify vowel check
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } else if (isdigit(ch)) {
        printf("Digit");
    } else {
        printf("Special Character");
    }

    return 0;
}