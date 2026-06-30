#include <stdio.h>

struct account {
    int accNo;
    char name[30];
    float balance;
};

int main() {
    struct account a;
    int ch;
    float amt;

    printf("Enter account number: ");
    scanf("%d", &a.accNo);

    printf("Enter account holder name: ");
    scanf("%s", a.name);

    printf("Enter initial balance: ");
    scanf("%f", &a.balance);

    while(1) {
        printf("\n\n1 Display account");
        printf("\n2 Deposit money");
        printf("\n3 Withdraw money");
        printf("\n4 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            printf("\nAccount No: %d", a.accNo);
            printf("\nName: %s", a.name);
            printf("\nBalance: %.2f", a.balance);
        }

        else if(ch == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amt);

            if(amt > 0) {
                a.balance = a.balance + amt;
                printf("Deposited successfully");
            } else {
                printf("Invalid amount");
            }
        }

        else if(ch == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amt);

            if(amt > 0 && amt <= a.balance) {
                a.balance = a.balance - amt;
                printf("Withdraw successful");
            } else {
                printf("Insufficient balance / invalid amount");
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
