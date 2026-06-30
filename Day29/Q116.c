#include <stdio.h>

struct item {
    int id;
    char name[20];
    int quantity;
    float price;
};

int main() {
    struct item i[20];
    int n, ch, id, j, found;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(j = 0; j < n; j++) {
        printf("\nEnter item id: ");
        scanf("%d", &i[j].id);

        printf("Enter item name: ");
        scanf("%s", i[j].name);

        printf("Enter quantity: ");
        scanf("%d", &i[j].quantity);

        printf("Enter price: ");
        scanf("%f", &i[j].price);
    }

    while(1) {
        printf("\n\n--- MENU ---");
        printf("\n1 Display items");
        printf("\n2 Search item");
        printf("\n3 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            for(j = 0; j < n; j++) {
                printf("\n%d %s %d %.2f",
                    i[j].id,
                    i[j].name,
                    i[j].quantity,
                    i[j].price);
            }
        }

        else if(ch == 2) {
            printf("Enter item id to search: ");
            scanf("%d", &id);

            found = 0;

            for(j = 0; j < n; j++) {
                if(i[j].id == id) {
                    printf("\nFound Item:");
                    printf("\nName: %s", i[j].name);
                    printf("\nQuantity: %d", i[j].quantity);
                    printf("\nPrice: %.2f", i[j].price);
                    found = 1;
                }
            }

            if(found == 0) {
                printf("Item not found");
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
