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
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}