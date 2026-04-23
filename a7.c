#include <stdio.h>

    struct student{
        int roll;
        char name[20];
        int m1, m2, m3;
        float avg;
    };
int main(){
    struct student s[5];
    int i, total, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);
        total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = total/3.0;
    }
    printf("\nStudent Details\n");

    for(i=0;i<n;i++){
        printf("Roll: %d\n",s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Average: %.2f\n", s[i].avg);
    }
    return 0;
    }
