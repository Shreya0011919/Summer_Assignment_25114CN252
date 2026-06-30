#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    getchar();

    printf("Enter Student Name: ");
    gets(name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\n========== MARK SHEET ==========\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Subject 1   : %.2f\n", m1);
    printf("Subject 2   : %.2f\n", m2);
    printf("Subject 3   : %.2f\n", m3);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage >= 60)
        printf("Division    : First");
    else if (percentage >= 45)
        printf("Division    : Second");
    else if (percentage >= 33)
        printf("Division    : Third");
    else
        printf("Division    : Fail");

    return 0;
}
