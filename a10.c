#include <stdio.h>

int main(){
    int choice,x,y,i,f=1,p=1;

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Power x^y\n6.Factorial x!\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice){

    case 1:
        printf("Enter two numbers: ");
        scanf("%d %d",&x,&y);
        printf("Result = %d",x+y);
        break;

    case 2:
        printf("Enter two numbers: ");
        scanf("%d %d",&x,&y);
        printf("Result = %d",x-y);
        break;

    case 3:
        printf("Enter two numbers: ");
        scanf("%d %d",&x,&y);
        printf("Result = %d",x*y);
        break;

    case 4:
        printf("Enter two numbers: ");
        scanf("%d %d",&x,&y);
        printf("Result = %d",x/y);
        break;

    case 5:
        printf("Enter x and y: ");
        scanf("%d %d",&x,&y);
        for(i=1;i<=y;i++)
            p=p*x;
        printf("Result = %d",p);
        break;

    case 6:
        printf("Enter number: ");
        scanf("%d",&x);
        for(i=1;i<=x;i++)
            f=f*i;
        printf("Result = %d",f);
        break;

    default:
        printf("Invalid choice");
    }

    return 0;
}