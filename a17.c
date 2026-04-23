#include <stdio.h>

float power(float x, int n) {
    float result = 1;
    for (int i = 0; i < n; i++)
        result = result * x;
    return result;
}

float factorial(int n) {
    float result = 1;
    for (int i = 1; i <= n; i++)
        result = result * i;
    return result;
}

int main() {
    int n;
    float x, sum = 0;

    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int p = 2*i + 1;
        sum = sum + power(-1, i) * power(x, p) / factorial(p);
    }

    printf("Sum = %f\n", sum);
    return 0;
}