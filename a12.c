//gcd and scd

#include <stdio.h>

int gcd(int n1, int n2){
    while (n2!=0){
        int temp = n2;
        n2 = n1%n2;
        n1 = temp;
    }
    return n1;
}

int scd(int n1, int n2){
    int i;
    int smaller = n1;
    if (n2<n1){
        smaller = n2;
    }
    for(i=2; i<=smaller; i++){
        if (n1%i == 0 && n2%i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    int n1, n2;
    printf("Enter 2 numbers:");
    scanf("%d%d", &n1, &n2);

    printf("GCD : %d\n", gcd(n1, n2));
    printf("SCD : %d\n", scd(n1, n2));
    
    return 0;

}
