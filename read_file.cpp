#include <stdio.h>
#include <cstring>
#define MAX_CHARS 1000

int main() {
    // Open the file for reading
    FILE *file = fopen("filec.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        return 1; // Exit with an error code
    }

    // Read characters from the file using fgets
    char buffer[MAX_CHARS];
    int charCount = 0;

    printf("Characters read from filec.txt:\n");

    while (fgets(buffer, MAX_CHARS, file) != NULL) {
        fputs(buffer, stdout); // Display the characters to the console
        charCount += strlen(buffer); // Count the characters
    }

    // Close the file
    fclose(file);

    printf("\nNumber of characters in filec.txt: %d\n", charCount);

    return 0;
}
