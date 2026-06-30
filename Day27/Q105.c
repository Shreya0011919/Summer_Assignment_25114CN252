#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    getchar();

    printf("Enter Name: ");
    gets(name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    return 0;
}
