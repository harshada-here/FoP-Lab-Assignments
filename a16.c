#include <stdio.h>

int main(){
    int n,i,a[100];

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Even numbers: ");
    for(i=0;i<n;i++){
        if(a[i]%2==0)
            printf("%d ",a[i]);
    }

    printf("\nOdd numbers: ");
    for(i=0;i<n;i++){
        if(a[i]%2!=0)
            printf("%d ",a[i]);
    }

    return 0;
}