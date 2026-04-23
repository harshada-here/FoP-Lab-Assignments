#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error opening destination file!\n");
        fclose(source);
        return 1;
    }

    // Copy char by char until end of file
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    // Read and print destination file contents
    destination = fopen("destination.txt", "r");
    printf("Destination file destination.txt will contain:\n");
    while ((ch = fgetc(destination)) != EOF) {
        putchar(ch);
    }

    fclose(destination);
    return 0;
}