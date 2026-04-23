#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    char copy[100], concat[200], rev[100];
    int choice, i, len;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Length of string\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Reverse string\n");
        printf("6. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Length of \"%s\": %lu\n", s1, strlen(s1));
                break;

            case 2:
                strcpy(copy, s1);
                printf("Copied string: %s\n", copy);
                break;

            case 3:
                strcpy(concat, s1);
                strcat(concat, s2);
                printf("Concatenated string: %s\n", concat);
                break;

            case 4:
                if (strcmp(s1, s2) == 0)
                    printf("Strings are EQUAL\n");
                else
                    printf("Strings are NOT EQUAL\n");
                break;

            case 5:
                len = strlen(s1);
                for (i = 0; i < len; i++)
                    rev[i] = s1[len - 1 - i];
                rev[len] = '\0';
                printf("Reversed string: %s\n", rev);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}