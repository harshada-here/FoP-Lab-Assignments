#include <stdio.h>
int main(){
    float bs, hra, ta, gs, pt, ns;
    printf("Enter basic salary: ");
    scanf("%f", &bs);
    hra = 0.1*bs;
    ta = 0.05*bs;
    gs = hra + ta + bs;
    pt = 0.02*gs;
    ns = gs - pt;
    printf("Travel allowance = %.2f\n", ta);
    printf("Home Rent Allowant = %.2f\n", hra);
    printf("Gross salary: %.2f\n", gs);
    printf("Professional Tax: %.2f\n", pt);
    printf("Net Salary: %.2f\n", ns);
    return 0;
}