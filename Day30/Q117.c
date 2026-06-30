#include <stdio.h>

struct student {
    int roll;
    char name[20];
    char course[20];
    float marks;
};

int main() {
    struct student s[20];
    int n, i, searchRoll, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter roll no: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter course: ");
        scanf("%s", s[i].course);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++) {
        printf("\n%d %s %s %.2f",
            s[i].roll,
            s[i].name,
            s[i].course,
            s[i].marks);
    }

    printf("\n\nEnter roll no to search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++) {
        if(s[i].roll == searchRoll) {
            printf("\nFound Student:");
            printf("\nName: %s", s[i].name);
            printf("\nCourse: %s", s[i].course);
            printf("\nMarks: %.2f", s[i].marks);
            found = 1;
        }
    }

    if(found == 0) {
        printf("Student not found");
    }

    return 0;
}
