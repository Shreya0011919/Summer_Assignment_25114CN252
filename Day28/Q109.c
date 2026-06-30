#include <stdio.h>

struct book {
    int id;
    char name[30];
    char author[30];
    int status; // 0 = available, 1 = issued
};

int main() {
    struct book b[20];
    int n, i, ch, id, found;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter book id: ");
        scanf("%d", &b[i].id);

        printf("Enter book name: ");
        scanf("%s", b[i].name);

        printf("Enter author name: ");
        scanf("%s", b[i].author);

        b[i].status = 0;
    }

    while(1) {
        printf("\n1 Display books");
        printf("\n2 Issue book");
        printf("\n3 Return book");
        printf("\n4 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            for(i = 0; i < n; i++) {
                printf("\n%d %s %s %s",
                    b[i].id,
                    b[i].name,
                    b[i].author,
                    (b[i].status == 0) ? "Available" : "Issued");
            }
        }

        else if(ch == 2) {
            printf("Enter book id to issue: ");
            scanf("%d", &id);

            found = 0;
            for(i = 0; i < n; i++) {
                if(b[i].id == id) {
                    found = 1;
                    if(b[i].status == 0) {
                        b[i].status = 1;
                        printf("Book issued\n");
                    } else {
                        printf("Already issued\n");
                    }
                }
            }
            if(found == 0) printf("Book not found\n");
        }

        else if(ch == 3) {
            printf("Enter book id to return: ");
            scanf("%d", &id);

            found = 0;
            for(i = 0; i < n; i++) {
                if(b[i].id == id) {
                    found = 1;
                    if(b[i].status == 1) {
                        b[i].status = 0;
                        printf("Book returned\n");
                    } else {
                        printf("Book was not issued\n");
                    }
                }
            }
            if(found == 0) printf("Book not found\n");
        }

        else if(ch == 4) {
            break;
        }

        else {
            printf("Invalid choice");
        }
    }

    return 0;
}
