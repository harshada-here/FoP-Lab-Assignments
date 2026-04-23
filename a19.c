#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[20];       // Date of Joining
    float salary;
};

// a) Total number of employees
void totalEmployees(int n) {
    printf("\nTotal Employees: %d\n", n);
}

// b) Count male and female employees
void countGender(struct EMPLOYEE e[], int n) {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(e[i].gender, "Male") == 0)
            male++;
        else
            female++;
    }
    printf("\nMale Employees:   %d\n", male);
    printf("Female Employees: %d\n", female);
}

// c) Employees with salary more than 10,000
void salaryAbove10000(struct EMPLOYEE e[], int n) {
    printf("\nEmployees with Salary > 10,000:\n");
    for (int i = 0; i < n; i++) {
        if (e[i].salary > 10000)
            printf("  %s (%.2f)\n", e[i].name, e[i].salary);
    }
}

// d) Employees with designation "Asst Manager"
void asstManagers(struct EMPLOYEE e[], int n) {
    printf("\nEmployees with Designation 'Asst Manager':\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(e[i].designation, "Asst Manager") == 0)
            printf("  %s\n", e[i].name);
    }
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE e[n];

    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d \n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Designation: ");
        scanf(" %[^\n]", e[i].designation);

        printf("Gender: ");
        scanf(" %[^\n]", e[i].gender);

        printf("Date of Joining:");
        scanf(" %[^\n]", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n Results:\n");
    totalEmployees(n);
    countGender(e, n);
    salaryAbove10000(e, n);
    asstManagers(e, n);

    return 0;
}