#include <stdio.h>

int main() {
    // Open the file for writing
    FILE *file = fopen("filec.txt", "w");

    // Check if the file is opened successfully
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1; // Exit with an error code
    }

    printf("Enter characters (press Enter to finish):\n");

    // Read characters from the keyboard until Enter is pressed
    int ch;
    while ((ch = getc(stdin)) != '\n') {
        putc(ch, file); // Write the character to the file
    }

    // Close the file
    fclose(file);

    printf("Characters written to filec.txt successfully.\n");

    return 0;
}
