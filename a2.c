#include <stdio.h>
int main(){
    int a, b, choice;
    printf("1. Addition\n");
    printf("2. SUbtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter you choice(1, 2, 3, 4): ");
    scanf("%d", &choice);
    
    switch (choice){
        case 1:
        printf("Addition: %d\n", a+b);
        break;
        case 2:
        printf("Subtraction: %d\n", a-b);
        break;
        case 3:
        printf("Multiplication: %d\n", a*b);
        break;
        case 4:
        if (b==0){
            printf("Denominator cannot be zero\n");
        }
        else{
            printf("Division: %d\n", a/b);
        }
        break;
    }
    return 0;
}