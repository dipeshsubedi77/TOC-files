// wap in thattakes a string  & 2 indices i & j as input & prints the substring between i &j
#include <stdio.h>

#include<string.h>


void printSubstring(char str[], int i, int j) {
    // Loop from index i to j and print each character
    for (int k = i; k <= j; k++) {
        printf("%c", str[k]);
    }
    printf("\n");
}

int main() {
    char str[100];
    int i, j;

    // Take inputs
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the starting index (i): ");
    scanf("%d", &i);
    printf("Enter the ending index (j): ");
    scanf("%d", &j);

    // Print the substring
    printSubstring(str, i, j);

    return 0;
}



