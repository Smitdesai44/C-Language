

#include <stdio.h>

int main() {
    char str1[100], str2[100], concatenated[200];
    int i, j;

    // Accept the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Accept the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Copy the first string into concatenated
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0'; // Replace newline with null terminator
            break;
        }
        concatenated[i] = str1[i];
    }

    // Copy the second string into concatenated
    for (j = 0; str2[j] != '\0'; j++) {
        if (str2[j] == '\n') {
            str2[j] = '\0'; // Replace newline with null terminator
            break;
        }
        concatenated[i + j] = str2[j];
    }
    concatenated[i + j] = '\0'; // Null-terminate the concatenated string

    // Print the concatenated string
    printf("Concatenated string: %s\n", concatenated);

    return 0;
}