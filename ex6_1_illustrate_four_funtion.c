#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];
    int length, comparison;

    // Input for first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  // Remove the newline character

    // Input for second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  // Remove the newline character

    // 1. strlen() - Calculate and display the length of the first string
    length = strlen(str1);
    printf("\nLength of the first string: %d\n", length);

    // 2. strcpy() - Copy the first string into another string
    strcpy(str3, str1);
    printf("String copied into str3: %s\n", str3);

    // 3. strcat() - Concatenate the first and second strings
    strcat(str3, str2);
    printf("Concatenated string (str3): %s\n", str3);

    // 4. strcmp() - Compare the first and second strings
    comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("The two strings are equal.\n");
    } else if (comparison < 0) {
        printf("The first string is lexicographically smaller than the second.\n");
    } else {
        printf("The first string is lexicographically greater than the second.\n");
    }

return 0;
}