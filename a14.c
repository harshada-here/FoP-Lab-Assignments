#include <stdio.h>
#include <math.h>

int main(){
    int bin,rem,i=0;
    int dec=0;

    printf("Enter binary number: ");
    scanf("%d",&bin);

    while(bin!=0){
        rem=bin%10;
        dec=dec+rem*pow(2,i);
        bin=bin/10;
        i++;
    }

    printf("Decimal number = %d",dec);

    return 0;
}