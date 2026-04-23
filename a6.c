#include <stdio.h>

int fact(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main(){
    int n,i,f=1,choice;

    printf("1.Without Recursion\n2.With Recursion\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    printf("Enter number: ");
    scanf("%d",&n);

    switch(choice){

        case 1:
            for(i=1;i<=n;i++)
                f=f*i;
            printf("Factorial = %d",f);
            break;

        case 2:
            printf("Factorial = %d",fact(n));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}