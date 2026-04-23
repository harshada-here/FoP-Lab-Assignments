#include <stdio.h>

int main() {
    int a[2][2],b[2][2],c[2][2];
    int i,j,choice,sum;
    int min,max,row=0,col=0,saddle;
    int det;

    printf("Enter elements of first matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    printf("\n1.Addition\n2.Saddle Point\n3.Inverse\n4.Magic Square\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice){

    case 1:
        printf("Addition:\n");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j]=a[i][j]+b[i][j];
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
        break;

    case 2:
        min=a[0][0];
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                if(a[i][j]<min){
                    min=a[i][j];
                    row=i;
                    col=j;
                }
            }
        }

        max=a[row][0];
        for(j=0;j<2;j++){
            if(a[row][j]>max){
                max=a[row][j];
                col=j;
            }
        }

        saddle=a[row][col];
        printf("Saddle Point = %d\n",saddle);
        break;

    case 3:
        det=a[0][0]*a[1][1]-a[0][1]*a[1][0];

        if(det!=0){
            printf("Inverse Matrix:\n");
            printf("%.2f %.2f\n",(float)a[1][1]/det,(float)-a[0][1]/det);
            printf("%.2f %.2f\n",(float)-a[1][0]/det,(float)a[0][0]/det);
        }
        else{
            printf("Inverse not possible\n");
        }
        break;

    case 4:
        sum=0;
        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
                sum+=a[i][j];

        if(sum==15)
            printf("Magic Square\n");
        else
            printf("Not Magic Square\n");
        break;

    default:
        printf("Invalid choice");
    }

    return 0;
}