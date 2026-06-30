#include <stdio.h>

int main() {
    int a[20], n, i, ch, pos, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while(1) {
        printf("\n\n--- MENU ---");
        printf("\n1 Display array");
        printf("\n2 Insert element");
        printf("\n3 Delete element");
        printf("\n4 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            printf("Array: ");
            for(i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
        }

        else if(ch == 2) {
            printf("Enter position and value: ");
            scanf("%d %d", &pos, &val);

            for(i = n; i >= pos; i--) {
                a[i] = a[i - 1];
            }

            a[pos - 1] = val;
            n++;

            printf("Inserted successfully");
        }

        else if(ch == 3) {
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            for(i = pos - 1; i < n - 1; i++) {
                a[i] = a[i + 1];
            }

            n--;

            printf("Deleted successfully");
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
