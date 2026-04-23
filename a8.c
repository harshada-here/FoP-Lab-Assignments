#include <stdio.h>
int main(){
    int m1, m2, m3, m4, m5, i;
    int total;
    float avg;

    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&m1, &m2, &m3, &m4, &m5);

    total = m1+m2+m3+m4+m5;
    avg = total/5.0;

    if(m1<40 || m2<40 || m3<40 || m4<40 || m5<40){
        printf("FAIL\n");
    }
    else{
        printf("Pass\n");
    }

    if(avg>=75)
        printf("Grade: Distinction\n");
    else if(avg>=60 && avg<75)
        printf("Grade: First Division");
    else if(avg>=50 && avg <60)
        printf("Grade: Second Division\n");
    else if(avg>=40 && avg<50)
        printf("Grade: Third Division\n");

    return 0;
}