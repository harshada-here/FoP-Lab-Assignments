#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], sub[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("\nLength: %d\n", strlen(s1));

    int len = strlen(s1);
    char rev[100];
    for (int i = 0; i < len; i++)
        rev[i] = s1[len - 1 - i];
    rev[len] = '\0';
    printf("Reversed String: %s\n", rev);

    printf("\nEnter second string: ");
    scanf("%s", s2);
    if (strcmp(s1, s2) == 0)
        printf("Strings are EQUAL\n");
    else
        printf("Strings are NOT EQUAL\n");

    if (strcmp(s1, rev) == 0)
        printf("%s is a PALINDROME\n", s1);
    else
        printf("%s is NOT a PALINDROME\n", s1);

    printf("\nEnter substring to search: ");
    scanf("%s", sub);
    if (strstr(s1, sub) != NULL)
        printf("\"%s\" IS a substring of \"%s\"\n", sub, s1);
    else
        printf("\"%s\" is NOT a substring of \"%s\"\n", sub, s1);

    return 0;
}