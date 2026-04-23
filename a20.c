#include <stdio.h>

// WITHOUT pointers
void swapWithoutPointer(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

// WITH pointers
void swapWithPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    swapWithoutPointer(a, b);

    swapWithPointer(&x, &y);
    printf("After swapping with pointers:\n");
    printf("x = %d y = %d\n", x, y);

    return 0;
}