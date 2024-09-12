// wap in c that takes a string as input and verifies if it is a valid keyword or identifier
//1.note valid keywords are enum ,int ,chAR,WHILE,FOR , SWITCH,goto,short,long
//2. an identifier -starts with letter or underscore -after first charcater  any sequence of letters,digits, and underscore can occur.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if the string is a keyword
int isKeyword(const char *str) {
    // List of valid keywords
    const char *keywords[] = {"enum", "int", "chAR", "WHILE", "FOR", "SWITCH", "goto", "short", "long"};
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    // Check if the input matches any keyword
    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1; // It's a keyword
        }
    }
    return 0; // Not a keyword
}

// Function to check if the string is a valid identifier
int isValidIdentifier(const char *str) {
    // Check if the first character is a letter or underscore
    if (!(isalpha(str[0]) || str[0] == '_')) {
        return 0; // Not a valid identifier
    }

    // Check remaining characters
    for (int i = 1; str[i] != '\0'; i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            return 0; // Not a valid identifier
        }
    }

    return 1; // Valid identifier
}

int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if it's a keyword
    if (isKeyword(str)) {
        printf("%s is a valid keyword.\n", str);
    }
    // Check if it's a valid identifier
    else if (isValidIdentifier(str)) {
        printf("%s is a valid identifier.\n", str);
    }
    // If neither, it's invalid
    else {
        printf("%s is neither a valid keyword nor a valid identifier.\n", str);
    }

    return 0;
}
