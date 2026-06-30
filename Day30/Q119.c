#include <stdio.h>

struct employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct employee e[10];
    int n, i, ch, id, found = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter id: ");
        scanf("%d", &e[i].id);

        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    while(1) {
        printf("\n\n1 Display");
        printf("\n2 Search");
        printf("\n3 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            for(i = 0; i < n; i++) {
                printf("\n%d %s %.2f",
                    e[i].id,
                    e[i].name,
                    e[i].salary);
            }
        }

        else if(ch == 2) {
            printf("Enter id to search: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) {
                if(e[i].id == id) {
                    printf("\nFound: %s %.2f", e[i].name, e[i].salary);
                    found = 1;
                }
            }

            if(found == 0) {
                printf("Not found");
            }
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
