#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

void addStudent(struct student s[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEnter roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
}

void display(struct student s[], int n) {
    int i;
    printf("\n--- Student List ---\n");
    for(i = 0; i < n; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}

void search(struct student s[], int n) {
    int i, r, found = 0;

    printf("Enter roll to search: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(s[i].roll == r) {
            printf("Found: %s %.2f\n", s[i].name, s[i].marks);
            found = 1;
        }
    }

    if(found == 0) {
        printf("Not found\n");
    }
}

int main() {
    struct student s[20];
    int n, ch;

    printf("Enter number of students: ");
    scanf("%d", &n);

    addStudent(s, n);

    while(1) {
        printf("\n\n--- MENU ---");
        printf("\n1 Display");
        printf("\n2 Search");
        printf("\n3 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            display(s, n);
        }
        else if(ch == 2) {
            search(s, n);
        }
        else if(ch == 3) {
            break;
        }
        else {
            printf("Invalid choice");
        }
    }

    return 0;
}
