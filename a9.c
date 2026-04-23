#include <stdio.h>

int main(){
    int n,rem,sum=0,temp;

    printf("Enter number: ");
    scanf("%d",&n);

    temp=n;

    while(temp!=0){
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }

    if(sum==n)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");

    return 0;
}