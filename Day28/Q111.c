#include <stdio.h>

struct ticket {
    int id;
    char name[30];
    int seats;
    int booked;
};

int main() {
    struct ticket t;
    int ch, seat;

    printf("Enter ticket ID: ");
    scanf("%d", &t.id);

    printf("Enter customer name: ");
    scanf("%s", t.name);

    printf("Enter total available seats: ");
    scanf("%d", &t.seats);

    t.booked = 0;

    while(1) {
        printf("\n\n1 Show details");
        printf("\n2 Book ticket");
        printf("\n3 Cancel ticket");
        printf("\n4 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            printf("\nTicket ID: %d", t.id);
            printf("\nName: %s", t.name);
            printf("\nAvailable seats: %d", t.seats);
            printf("\nBooked seats: %d", t.booked);
        }

        else if(ch == 2) {
            printf("Enter number of seats to book: ");
            scanf("%d", &seat);

            if(seat <= t.seats && seat > 0) {
                t.seats = t.seats - seat;
                t.booked = t.booked + seat;
                printf("Ticket booked successfully");
            } else {
                printf("Not enough seats");
            }
        }

        else if(ch == 3) {
            printf("Enter number of seats to cancel: ");
            scanf("%d", &seat);

            if(seat <= t.booked && seat > 0) {
                t.booked = t.booked - seat;
                t.seats = t.seats + seat;
                printf("Ticket cancelled successfully");
            } else {
                printf("Invalid cancel request");
            }
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
