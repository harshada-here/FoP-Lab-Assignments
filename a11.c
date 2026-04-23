#include <stdio.h>
#include <math.h>

int main(){
    int n,i,choice;
    int f=1;

    printf("1.Square Root\n2.Square\n3.Cube\n4.Check Prime\n5.Factorial\n6.Prime Factors\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    printf("Enter number: ");
    scanf("%d",&n);

    switch(choice){

    case 1:
        printf("Square Root = %.2f",sqrt(n));
        break;

    case 2:
        printf("Square = %d",n*n);
        break;

    case 3:
        printf("Cube = %d",n*n*n);
        break;

    case 4:
        for(i=2;i<n;i++){
            if(n%i==0){
                printf("Not Prime");
                return 0;
            }
        }
        printf("Prime Number");
        break;

    case 5:
        for(i=1;i<=n;i++)
            f=f*i;
        printf("Factorial = %d",f);
        break;

    case 6:
        printf("Prime Factors: ");
        for(i=2;i<=n;i++){
            while(n%i==0){
                printf("%d ",i);
                n=n/i;
            }
        }
        break;

    default:
        printf("Invalid choice");
    }

    return 0;
}