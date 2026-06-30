#include <stdio.h>

int main()
{
    int empId;
    char name[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    getchar();

    printf("Enter Employee Name: ");
    gets(name);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\n----- Employee Details -----\n");
    printf("Employee ID : %d\n", empId);
    printf("Employee Name : %s\n", name);
    printf("Salary : %.2f\n", salary);

    return 0;
}
