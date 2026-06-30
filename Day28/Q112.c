#include <stdio.h>

struct contact {
    int id;
    char name[30];
    char phone[15];
    char email[30];
};

int main() {
    struct contact c[50];
    int n, i, ch, id, found;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter contact id: ");
        scanf("%d", &c[i].id);

        printf("Enter name: ");
        scanf("%s", c[i].name);

        printf("Enter phone: ");
        scanf("%s", c[i].phone);

        printf("Enter email: ");
        scanf("%s", c[i].email);
    }

    while(1) {
        printf("\n\n1 Display contacts");
        printf("\n2 Search contact");
        printf("\n3 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            for(i = 0; i < n; i++) {
                printf("\n%d %s %s %s",
                    c[i].id,
                    c[i].name,
                    c[i].phone,
                    c[i].email);
            }
        }

        else if(ch == 2) {
            printf("Enter id to search: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) {
                if(c[i].id == id) {
                    printf("\nFound Contact:");
                    printf("\nName: %s", c[i].name);
                    printf("\nPhone: %s", c[i].phone);
                    printf("\nEmail: %s", c[i].email);
                    found = 1;
                }
            }

            if(found == 0) {
                printf("Contact not found");
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
